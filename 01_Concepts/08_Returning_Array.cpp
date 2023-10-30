#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// void func(int *A, int size)
int *dynamicArray(int n)
{
    int *A = (int *)malloc(n * sizeof(int));

    return A;
}

int main(int argc, char const *argv[])
{
    int arrSize = 0;
    int *array;
    printf("Array size: ");
    scanf("%d", &arrSize);

    array = dynamicArray(arrSize);
    printf("\n");

    for (int i = 0; i < arrSize; i++)
    {
        /* code */
        printf("array[%d] = ", i);
        scanf("%d", array + i);
    }

    printf("\n");

    for (int i = 0; i < arrSize; i++)
    {
        /* code */
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}