/* Exercise 1-15:
 * Rewrite the temperature conversion program of section 1.2 to use a
 * function for conversion.
 */

#include <stdio.h>

float f_to_c(float f);

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;		/* lower limit of temperature table */
    upper = 300;	/* upper limit */
    step = 20;		/* step size */

    /*
     * Print header
     */
    printf("%10s %10s\n", "Fahrenheit", "Celsius");

    fahr = lower;
    while (fahr <= upper) {
        celsius = f_to_c(fahr);
        printf("%10.0f %10.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float f_to_c(float f)
{
    return (5.0/9.0) * (f - 32);
}
