/* Exercise 1-4:
 * Write a program to print the corresponding Celsius to Fahrenheit
 * table.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */
main()
{
     float fahr, celsius;
     int lower, upper, step;

     lower = -20;	/* lower limit of temperature table */
     upper = 150;	/* upper limit */
     step = 12;		/* step size */

     /* 
      * Print header
      */
     printf("%10s %10s\n", "Celsius", "Fahrenheit");

     celsius = lower;
     while (celsius <= upper) {
	  fahr = (9.0/5.0) * celsius + 32.0;
	  printf("%10.1f %10.0f\n", celsius, fahr);
	  celsius = celsius + step;
     }
}
