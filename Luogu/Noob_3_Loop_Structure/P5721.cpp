#include <iostream>
using namespace std;

int n;

int main()
{
    cin >> n;
    int num = 0;
    for (n; n >= 0; n--)
    {
        for (n; n > 0; n--)
        {
            if (num < 10)
                cout << "0" << num;
            else
            {
                cout << num;
            }
            ++num;
        }
    }
    return 0;
}