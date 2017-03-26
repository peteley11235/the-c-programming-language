/* Exercise 1-6:
 * Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

int main()
{
     int c, char_test;

     while (char_test = ((c = getchar()) != EOF))
     {
	  if (char_test != 0
	      && char_test != 1)
	  {
	       /* does not print */
	       printf("If this prints, you have not verified it.");
	  }
     }
}
