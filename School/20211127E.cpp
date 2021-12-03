#include <algorithm>
#include <iostream>
using namespace std;

int a[10];
int j = 1;

int main()
{

    for (int i = 1; i <= 8; i++)
    {
        a[i] = 8 - i + 1;
        j *= i;
    }
    for (int i = 1; i <= j; i++)
    {
        next_permutation(a + 1, a + 8 + 1);
        for (int k = 1; k < 8; k++)
            cout <<a[k]<<" ";
        cout << a[8];
        cout << endl;
    }
    return 0;
}