#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    int B[10] = {2, 4, 6, 8, 10, 18, 20};
    int C[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", C[i]);
    }

    for (int x : B)
    {
        cout << x << endl;
    }

    // cout << sizeof(B) << endl;
    // cout << B[1] << endl;
    // printf("%d\n", B[9]);

    return 0;
}
