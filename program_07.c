#include <stdio.h>

int main()
{

    // Type Conversion & Casting

    int a = 10;
    float b = a; // Implicit conversion
    float x = 5.75;
    int y = (int)x; // Explicit casting

    printf("Integer a = %d, converted to float = %.2f\n", a, b);
    printf("Float x = %.2f, casted to int = %d\n", x, y);

    return 0;

    /*
    OUTPUT:-
    Integer a = 10, converted to float = 10.00
    Float x = 5.75, casted to int = 5

    */
}
