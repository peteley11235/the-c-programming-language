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

/* Exercise 1-1:
 * Run the "hello, world" program on your system. Experiment with
 * leaving out parts of the program, to see what error messages you
 * get.
 */

/*
 * 1-1.c: In function ‘main’:
 * 1-1.c:11:6: warning: incompatible implicit declaration of built-in function ‘printf’
 *       printf("hello, world\n");
 *       ^
 */
#include <stdio.h>

/*
 * 1-1.c:16:1: error: expected identifier or ‘(’ before ‘{’ token
 * {
 * ^
 */
int main()

/*
 * 1-1.c: In function ‘main’:
 * 1-1.c:23:6: error: expected declaration specifiers before ‘printf’
 *       printf("hello, world\n");
 *       ^
 * 1-1.c:24:1: error: expected declaration specifiers before ‘}’ token
 *  }
 *  ^
 *
 * 1-1.c:24:1: error: expected ‘{’ at end of input
 */
{

    /*
     * No error messages from leaving out this line
     */
    printf("hello, world\n");

    /*
     *1-1.c: In function ‘main’:
     * 1-1.c:38:6: error: expected declaration or statement at end of input
     *       printf("hello, world\n");
     *       ^
     */
}
