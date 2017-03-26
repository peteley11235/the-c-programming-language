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
