#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, const char **argv)
{
    int a = 10;
    int &rf = a;

    cout << a << endl;
    cout << rf << endl;

    rf++;
    cout << a << endl;
    cout << rf << endl;

    return 0;
}