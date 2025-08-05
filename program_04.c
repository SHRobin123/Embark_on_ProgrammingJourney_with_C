#include <stdio.h>

int main()
{

    // All Basic Data Types

    int age = 22;
    float pi = 3.14;
    double precise_pi = 3.1415926535;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Pi (float): %.2f\n", pi);
    printf("Precise Pi (double): %.10lf\n", precise_pi);
    printf("Grade: %c\n", grade);

    return 0;

    /*
    
    OUTPUT:-
    Age: 22
    Pi (float): 3.14
    Precise Pi (double): 3.1415926535
    Grade: A

    */
}
