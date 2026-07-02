#include <stdio.h>

/* Print Celsius-Fahrenheit conversion table 
   for celsius = 0, 10, ..., 150 */

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 150;   /* upper limit */
    step = 10;     /* step size */

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.1f\t%6.1f\n", celsius, fahr);

        celsius = celsius + step;
    }
}
