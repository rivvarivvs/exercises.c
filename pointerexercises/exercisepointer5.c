#include <stdio.h>

#define MAX_SIZE 100

void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArrays(int *sourceArr, int *destArr, int size);

int main() {

    int size;
    int sourceArray[MAX_SIZE], destinationArray[MAX_SIZE];

    printf("What's the size of the array?\n");
    scanf("%d", &size);

    printf("What are the elements in the source array?\n");
    inputArray(sourceArray, size);

    printf("What are the elements in the destination array?\n");
    inputArray(destinationArray, size);

    printf("\nSource array before swapping: ");
    printArray(sourceArray, size);

    printf("\nDestination array before swapping: ");
    printArray(destinationArray, size);

    swapArrays(sourceArray, destinationArray, size);

    printf("\nSource array after swapping: ");
    printArray(sourceArray, size);

    printf("\nDestination array after swapping: ");
    printArray(destinationArray, size);

    return 0;
}

//Function to take the input of the user for the array
void inputArray(int *arr, int size) {
    int *arrEnd = (arr+(size-1));

    while(arr <= arrEnd) {
        scanf("%d", arr++);
    }
}

//Function to get a module for printing the several arrays
void printArray(int *arr, int size) {
    int *arrEnd = (arr+(size-1));

    while (arr <= arrEnd) {
        printf("\n%d", *(arr++));
    }
}

//Function with the logic to swap two given arrays
void swapArrays(int *sourceArr, int *destArr, int size) {
    int *sourceEnd = (sourceArr+(size-1));
    int *destinationEnd = (destArr+(size-1));

    while(sourceArr <= sourceEnd && destArr <= destinationEnd) {
        *sourceArr ^= *destArr;
        *destArr ^= *sourceArr;
        *sourceArr ^= *destArr;

        sourceArr++;
        destArr++;
    }
}
