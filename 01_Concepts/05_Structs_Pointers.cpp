#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct rectangle
{
    int width;
    int height;
    char x;
};

int main(int argc, char const *argv[])
{
    struct rectangle *ptr;
    rectangle *ptr2;
    ptr = (struct rectangle *)malloc(sizeof(struct rectangle));
    ptr2 = new rectangle;

    if (ptr == NULL && ptr2 == NULL)
    {
        return 0;
    }

    ptr->width = 10;
    ptr->height = 5;
    ptr2->width = 8;
    ptr2->height = 4;

    printf("%d\n", sizeof(*ptr));
    printf("Base %d x altura %d = %d\n", (*ptr).width, (*ptr).height, ptr->height * ptr->width);
    printf("Base %d x altura %d = %d\n", (*ptr2).width, (*ptr2).height, ptr2->height * ptr2->width);

    return 0;
}
