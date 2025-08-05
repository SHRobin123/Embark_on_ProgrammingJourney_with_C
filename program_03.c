#include <stdio.h>
int main()

{
    // using Data Type

    /*
    Program of Summation
    and
    Average
    */

    int a, b, c, sum;

    float avg;

    printf("Enter three integer value:");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    avg = sum / 3;

    printf("\n The summation of three number are = %d", sum);

    printf("\n The Average of three number are = %2f", avg);

    return 0;

    /* 
    OUTPUT:-
    Enter three integer value:1 2 3  

    The summation of three number are = 6     
    The Average of three number are = 2.000000
    */
}