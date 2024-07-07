/* Temperature conversion program to print a heading above the table */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("fahrenheit | degree celsius \n");

    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%10.0f\t %10.2f \n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}