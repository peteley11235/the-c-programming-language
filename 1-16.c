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

/* Exercise 1-16:
 * Revise the main routine of the longest line program so it will
 * correctly print the length of arbitrarily long input lines, and as
 * much as possible of the text.
 */

#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int limit);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len;			/* current line length */
    int max;			/* maximum length seen so far */
    char line[MAXLINE];	/* current input line */
    char longest[MAXLINE];	/* longest line seen */

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)	/* there was a line */
        printf("[%d] %s\n", max, longest);
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

/* copy f into t; assume it is big enough */
void copy(char t[], char f[])
{
    int i;

    i = 0;
    while ((t[i] = f[i]) != '\0')
        ++i;
}
