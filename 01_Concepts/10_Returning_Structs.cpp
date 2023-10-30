#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct test
{
    int A[10];
    int b;
    int c;
};

int *createArray(int n)
{
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = i;
    }

    return ptr;
}

struct test *createStruct(int size)
{
    int *arr = NULL;
    struct test *t1 = (struct test *)malloc(sizeof(struct test));

    arr = createArray(size);

    for (int i = 0; i < size; i++)
    {
        t1->A[i] = arr[i];
    }

    t1->b = 10;
    t1->c = 20;

    return t1;
}

void printStruct(struct test *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("p->A[%d] = %d\n", i, p->A[i]);
    }

    printf("p->b = %d\n", p->b);
    printf("p->c = %d\n", p->c);
}

int main(int argc, char const *argv[])
{
    int arraySize = 0;
    struct test *t1;
    printf("Array size: ");
    scanf("%d", &arraySize);

    t1 = createStruct(arraySize);

    printf("Before change\n");
    printStruct(t1, arraySize);

    return 0;
}