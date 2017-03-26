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
