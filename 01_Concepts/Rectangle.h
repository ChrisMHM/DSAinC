#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include <iostream>

class Rectangle
{
private:
    int height;
    int width;

public:
    Rectangle(int height, int width);
    int area();
    void changeWidth(int newWidth);
    int perimeter();
    friend std::ostream &operator<<(std::ostream &os, const Rectangle &obj)
    {
        os << "height: " << obj.height << "\n";
        os << "width: " << obj.width << "\n";
        return os;
    }
};

#endif