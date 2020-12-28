#include <stdio.h>

int main()
 {
    double num1, num2;
    double *ptr1, *ptr2;
    double sum, sub, div, mult;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Pick two numbers:");
    scanf("%lf %lf", ptr1, ptr2);

    sum = (*ptr1) + (*ptr2);
    sub = (*ptr1) - (*ptr2);
    mult = (*ptr1) * (*ptr2);
    div = (*ptr1) / (*ptr2);

    printf("The sum is %f\n", sum);
    printf("The subtraction is %f\n", sub);
    printf("The multiplication is %f\n", mult);
    printf("The division is %f", div);


    return 0;
 }
