#include <stdio.h>

#define MAX_ARRAY_SIZE 10

#include "../utilities.h"


void bubbleSort(int *, int);
void swap(int* , int*);

int main(void) {
    int arr[MAX_ARRAY_SIZE];
    printf("Enter %d Numbers to an array: \n", MAX_ARRAY_SIZE);
    // readIntArray(arr, MAX_ARRAY_SIZE);
    int *a, *b;
    *a = 10;
    *b = 20;
    swap(a, b);
    printf("value at a: %d\n and value at b: %d", *a, *b);
    return 0;
}


// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         int 
//     }
// }


void swap(int *from, int *to) {
    int *temp = *from;
    *from = *to;
    *to = *temp;
}