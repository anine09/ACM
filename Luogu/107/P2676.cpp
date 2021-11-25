#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

const long long MAX_N = 20100;

int n, b;
int h[MAX_N];
bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    cin >> n >> b;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }
    sort(h, h + n, cmp);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(b<=0)
            break;
        b -= h[i];
        ans++;
    }
    cout << ans;
    return 0;
}