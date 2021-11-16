#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int n;
int T[10000];
int num[10000];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> T[i];
        num[i] = T[i];
    }
    cout << endl;
    cout << "-------------------------";
    cout << endl;
    sort(T, T + n);
    for (int j = 1; j <= n; j++)
    {
        for (int m = 1; m <= n; m++)
        {
            if (num[j] == T[m])
                cout << m << " ";
        }
    }
    cout << endl;
    double ans = 0;
    for (int k = 1; k <= n; k++)
    {
        ans += T[k];
    }
    printf("%.2lf", ans / n);

    return 0;
}