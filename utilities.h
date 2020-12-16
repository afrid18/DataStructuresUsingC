#ifndef UTILITIES_H
#define UTILITIES_H
// An Include gaurd for utilities library

int readIntArray(int arr[], int size);
int printIntArray(int arr[], int size);

int readIntArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int reader = 0;
        scanf("%d", &arr[size]);
    }
    return 0;
}

int printIntArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}


#endif

