#include <stdio.h>
#include "utilities.h"
#define MAX_ARRAY_LENGTH 10

int getSmall(int arr[], int from, int to);
int swapTwoInts(int arr[], int index1, int index2);

int selectionSort(int arr[], int size);

int main(void)
{
    int arr[MAX_ARRAY_LENGTH];
    printf("Please enter %d Integer array elements", MAX_ARRAY_LENGTH);
    readIntArray(arr, MAX_ARRAY_LENGTH);
    printf("%d Array elements read successfully\n\n", MAX_ARRAY_LENGTH);
    selectionSort(arr, MAX_ARRAY_LENGTH);
    printf("After sorting the array using Selection sort\nThe sorted array is: \n");
    printIntArray(arr, MAX_ARRAY_LENGTH);
    return 0;
}

int selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int smallIntIndx = getSmall(arr, i, size);
        swapTwoInts(arr, smallIntIndx, i);
    }
    return 0;
}

int getSmall(int arr[], int from, int to)
{
    int small = from;
    for (int i = from + 1; i < to; i++)
    {
        if (arr[small] > arr[i])
            swapTwoInts(arr, small, i);
    }
}

int swapTwoInts(int arr[], int index1, int index2)
{
    int temp = index1;
    index1 = index2;
    index2 = temp;
    return 0;
}