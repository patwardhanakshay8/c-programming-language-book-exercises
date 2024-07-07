/* 

Temperature conversion program to print degree celsius to fahrenheit 

Fahrenheit (°F) = (Temperature in degrees Celsius (°C) * 9/5) + 32

*/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char const *argv[])
{
    float fahr, celsius;    

    celsius = LOWER;

    printf("degree celsius | fahrenheit\n");

    while (celsius <= UPPER) {
        fahr = (celsius * 9/5) + 32;        
        printf("%10.0f\t %10.2f \n", celsius, fahr);
        celsius = celsius + STEP;
    }

    return 0;
}
