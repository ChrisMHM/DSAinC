#include <iostream>
#include <stdio.h>

using namespace std;

// void func(int *A, int size)
void func(int A[], int size)
{
    A[6] = 80;

    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("A[%d] = %d\n", i, A[i]);
    }
}

int main(int argc, char const *argv[])
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    func(A, 10);

    return 0;
}