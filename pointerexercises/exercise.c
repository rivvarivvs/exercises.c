#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("enter 1st num: ");
    scanf("%d%d", ptr1, ptr2);


    sum = *ptr1 + *ptr2;

    printf("The sum is %d", sum);

    return 0;
}
