#include <stdio.h>

int main()
{

    // Swap Two Numbers

    int a = 5, b = 10, temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;

    /*
    OUTPUT:-
    After swap: a = 10, b = 5

    */
}
