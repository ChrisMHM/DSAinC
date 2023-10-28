#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b[] = {2, 4, 6, 8, 10};
    int *p;
    int *q;
    int *r;
    // int *s = (int *)malloc(10 * sizeof(int));
    int *s = new int[10];

    s[1] = 2;
    s[2] = 3;
    s[3] = 4;
    s[4] = 5;
    s[5] = 6;
    s[6] = 7;
    s[7] = 8;

    p = &a;
    q = b;
    r = b;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("b[%d] = %d\n", i, *q++);
        printf("b'[%d] = %d\n", i, r[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("s[%d] = %d\n", i, s[i]);
    }

    // printf("pointer content: %d %x\n", p, p);
    // printf("a direction: %d %x\n", &a, &a);
    // printf("using pointer: %d\n", *p);
    // printf("pointer direction: %d %x\n", &p, &p);
    // printf("q content: %d\n", q);
    // printf("using q: %d\n", *q);
    // printf("*q++: %d\n", *q++);
    // printf("(*q)++: %d\n", (*q)++);
    // printf("*(q++): %d\n", *(q++));

    free(p);
    free(q);
    free(r);
    free(s);
    return 0;
}