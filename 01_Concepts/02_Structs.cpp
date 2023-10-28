#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle
{
    int width;
    int height;
    char x;
};

int main(int argc, char const *argv[])
{
    struct rectangle r1 = {10, 5};

    printf("%d\n", sizeof(r1));
    printf("Base %d x altura %d = %d\n", r1.width, r1.height, r1.height * r1.width);

    return 0;
}
