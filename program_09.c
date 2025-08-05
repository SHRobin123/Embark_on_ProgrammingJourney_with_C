#include <stdio.h>

int main()
{

    // Temperature Converter (Celsius to Fahrenheit)

    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;

    /*
    INPUT:-
    Enter temperature in Celsius: 37


    OUTPUT:-
    Temperature in Fahrenheit = 98.60

    */
}
