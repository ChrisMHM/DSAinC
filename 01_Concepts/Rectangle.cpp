#include "Rectangle.h"

Rectangle::Rectangle(int height, int width)
{
    this->height = height;
    this->width = width;
}

int Rectangle::area()
{
    return height * width;
}

void Rectangle::changeWidth(int newWidth)
{
    width = newWidth;
}

int Rectangle::perimeter()
{
    return height * 2 + width * 2;
}