#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 2;

    swap(a, b);
    swap2(&a, &b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}