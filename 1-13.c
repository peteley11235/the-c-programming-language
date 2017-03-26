/*
Copyright 2017 Peter Ley

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

/* Exercise 1-13:
 * Write a program to print a histogram of the lengths of words in its
 * input. It is easy to draw the histogram with the bars horizontal; a
 * vertical orientation is more challenging
 */

#include <stdio.h>

#define IN 1		/* inside a word */
#define OUT 0		/* outside a word */
#define MAXWORDSIZE 20

/* count lines, words, and characters in input */
int main()
{
    int c, state, current_word_len;
    int histogram[MAXWORDSIZE+1];

    for (int i = 0; i < MAXWORDSIZE+1; ++i) {
        histogram[i] = 0;
    }

    state = OUT;
    current_word_len = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            ++histogram[current_word_len];
            current_word_len = 0;
        }

        else if (state == OUT)
            state = IN;

        if (state == IN) {
            ++current_word_len;
        }
    }

    /* figure out where to reasonably end the histogram */
    int last;
    last = MAXWORDSIZE+1 + 1;
    while (histogram[--last] == 0)
        ;

    for (int i = 0; i <= last; ++i) {
        printf("%2d: ", i);

        for (int j = 0; j < histogram[i]; ++j)
            putchar('*');

        putchar('\n');
    }

    putchar('\n');

    /*
     * Print vertically
     */

    /* figure out the max element */
    int max = 0;
    for (int i = 0; i <= last; ++i)
        if (histogram[i] > max)
            max = histogram[i];

    /* print the histogram from the top down, so the most common
     * items will show up first */
    /* max and c are reused because why waste memory? */
    for (; max > 0; --max) {
        for (int i = 0; i <= last; ++i) {
            c = ' ';

            if (histogram[i] >= max)
                c = '*';

            printf("  %c ", c);
        }

        putchar('\n');
    }

    for (int i = 0; i <= last; ++i)
        printf("[%2d]", i);

    putchar('\n');
}
