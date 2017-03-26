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

/* Exercise 1-17:
 * Write a program to print all input lines that are longer than 80
 * characters.
 */

#include <stdio.h>

#define MAXLINE 1000
#define CUTOFF 80

int getline(char line[], int limit);

int main()
{
    int len;			/* current line length */
    char line[MAXLINE];	/* current input line */


    while ((len = getline(line, MAXLINE)) > 0)
        if (len > CUTOFF)
            printf("%s\n", line);

    return 0;
}

/* read a line into s, return length */
int getline(char s[], int lim)
{
    int c, len, i;

    len = i = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        if (i < lim-1) {
            s[i] = c;
            ++i;
        }

        ++len;
    }

    s[i] = '\0';

    return len;
}
