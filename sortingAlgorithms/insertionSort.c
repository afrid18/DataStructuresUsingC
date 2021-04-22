#include <stdio.h>

#include "../utilities.h"



#define MAX_ARRAY_SIZE 10


void insertionSort(int arr[], int size);

int main(void) {
    int arr[MAX_ARRAY_SIZE];
    printf("Enter the elements into the array: \n");
    readIntArray(arr, MAX_ARRAY_SIZE);
    insertionSort(arr, MAX_ARRAY_SIZE);
    printf("After sorting the array the sorted array is : \n");
    printIntArray(arr, MAX_ARRAY_SIZE);
    return 0;
}

void insertionSort(int arr[], int size) {
    for(int start = 1; start < size; ++start) {
        int key = arr[start];
        int k = start - 1;
        while(k >= 0 && key < arr[k]) {
            arr[k + 1] = arr[k];
            --k;
        }
        arr[k + 1] = key;
    }
}
