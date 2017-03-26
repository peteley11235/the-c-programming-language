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

/* Exercise 1-14:
 * Write a program to print a histogram of the frequencies of
 * different characters in its input.
 */

#include <stdio.h>

#define ASCIICHARS 128		/* the number of different chars */

int main()
{
    int c;
    int chars[ASCIICHARS+1];

    for (int i = 0; i <= ASCIICHARS; ++i)
        chars[i] = 0;

    while ((c = getchar()) != EOF) {
        ++chars[c];
    }

    printf("\nChar Frequency\n");
    printf("---- ---------\n");

    for (int i = 0; i <= ASCIICHARS; ++i)
        if (chars[i] > 0) {

            /* handle strange characters */
            switch (i) {
            case '\n':
                printf("[\\n] ");
                break;
            case '\t':
                printf("[\\t] ");
                break;
            default:
                printf("[%2c] ", i);
                break;
            }

            for (int j = 0; j < chars[i]; ++j)
                putchar('*');

            putchar('\n');
        }
}
