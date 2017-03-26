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
