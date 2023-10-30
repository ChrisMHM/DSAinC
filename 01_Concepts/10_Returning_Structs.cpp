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

void func(struct test *p)
{
    for (int i = 0; i < 10; i++)
    {
        p->A[i] = i * 5;
    }

    p->b *= 2;
    p->c *= 2;
}

void printStruct(struct test *p)
{
    for (int i = 0; i < 10; i++)
    {
        printf("p->A[%d] = %d\n", i, p->A[i]);
    }

    printf("p->b = %d\n", p->b);
    printf("p->c = %d\n", p->c);
}

int main(int argc, char const *argv[])
{
    struct test t1 = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, 5};

    printf("Before change\n");
    printStruct(&t1);
    func(&t1);
    printf("After change\n");
    printStruct(&t1);

    return 0;
}