#include "Rectangle.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, const char **argv)
{
    Rectangle rectangle(20, 30);

    printf("%d\n", rectangle.area());
    rectangle.changeWidth(15);
    cout << rectangle << endl;

    return 0;
}