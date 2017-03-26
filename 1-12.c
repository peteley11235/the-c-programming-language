/* Exercise 1-12:
 * Write a program that prints its input one word per line.
 */

#include <stdio.h>

int main()
{
     int c;

     while ((c = getchar()) != EOF) {

	  if (c == ' ' || c == '\t' || c == '\n') {

	       putchar('\n');

	       /* skip whitespace and get to the next word */
	       while ((c = getchar()) != EOF
		      && (c == ' '
			  || c == '\t'
			  || c == '\n'))
		    ;
	  }

	  putchar(c);
     }
}
