#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[100000];
    cin >> n;
    a[0] = n;
    int i = 1;
    while (true)
    {
        if (n == 1)
        {
            a[i] = n;
            break;
        }
        if (n % 2 != 0)
        {
            n = (n * 3) + 1;
            a[i] = n;
            i++;
        }
        else
        {
            n /= 2;
            a[i] = n;
            i++;
        }
    }
    for (; i >0; i--)
    {
        cout << a[i-1]<<" ";
    }

    return 0;
}
