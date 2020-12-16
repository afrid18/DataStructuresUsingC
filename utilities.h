#ifndef UTILITIES_H
#define UTILITIES_H
// An Include gaurd for utilities library

int readIntArray(int arr[], int size);
int printIntArray(int arr[], int size);

int readIntArray(int arr[], int size)
{
    int reader = 0;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        reader++;
    }
    printf("\n\n");
    return reader;
}

int printIntArray(int arr[], int size)
{
    int printer = 0;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
        printer++;
    }
    printf("\n\n");
    return printer;
}


#endif

