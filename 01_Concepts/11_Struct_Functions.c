#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int height;
    int width;
} typedef Rectangle;

void initialize(Rectangle *r1, int h, int w)
{
    r1->height = h;
    r1->width = w;
}

int area(Rectangle r)
{
    return r.height * r.width;
}

void changeWidth(Rectangle *r1, int w)
{
    r1->width = w;
}

int perimeter(Rectangle r)
{
    return r.height * 2 + r.width * 2;
}

int main()
{
    Rectangle r1;

    initialize(&r1, 5, 10);
    area(r1);
    perimeter(r1);
    changeWidth(&r1, 20);
}