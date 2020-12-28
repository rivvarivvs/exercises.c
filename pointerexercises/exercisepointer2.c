/**
 * C program to swap two number using call by reference
 */

 #include <stdio.h>

 void swap(int *num1, int *num2);

 int main()
 {
    int num1,num2;
    printf("Insert two numbers:");
    scanf("%d%d", &num1, &num2);

    printf("Numbers before swapping\n");
    printf("%d %d\n", num1, num2);

    swap(&num1, &num2);

    printf("Numbers after swapping\n");
    printf("%d %d", num1, num2);

    return 0;
 }

 /**
 * Function to swap two numbers
 */

 void swap(int *num1, int *num2)
 {
     int temp;

     temp = *num1;
     *num1 = *num2;
     *num2 = temp;

     printf("After swapping in the function:\n");
     printf("%d %d\n", num1, num2);
 }
