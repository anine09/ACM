#include <iostream>
#include <vector>
using namespace std;

int n;
int train[100100];
int ans = 0;

int swap(int &a, int &b)
{
    int c;
    if (a < b)
    {
        c = a;
        a = b;
        b = c;
        ans++;
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> train[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            swap(train[j], train[j - 1]);
        }
    }
    cout << ans;

    return 0;
}