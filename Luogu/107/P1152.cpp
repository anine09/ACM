#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int n;
int num[1100];
int num_abs[1100];

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i <= n; i++)
    {
        num_abs[i] = abs(num[i] - num[i + 1]);
    }
    sort(num_abs, num_abs + n, cmp);
    if (num_abs[1] >= 1 && num_abs[1] <= (n - 1))
        cout << "Jolly";
    else
        cout << "Not jolly";

    return 0;
}