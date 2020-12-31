#include <stdio.h>

#define MAX_ARRAY_SIZE 10

#include "../utilities.h"


void bubbleSort(int *, int);
void swap(int* , int*);

int main(void) {
    int arr[MAX_ARRAY_SIZE];
    printf("Enter %d Numbers to an array: \n", MAX_ARRAY_SIZE);
    readIntArray(arr, MAX_ARRAY_SIZE);
    bubbleSort(arr, MAX_ARRAY_SIZE);

    printf("The sorted Array is : \n");
    printIntArray(arr, MAX_ARRAY_SIZE);
    return 0;
}


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1 ; i++) {
        for(int j = 0; j < size - i - 1; j++)
        if(arr[j] > arr[j + 1]) {
            swap(&arr[j], &arr[j + 1]);
        }
    }
}


void swap(int *from, int *to) {
    int temp = *from;
    *from = *to;
    *to = temp;
    return;
}
