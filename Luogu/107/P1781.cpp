#include <algorithm>
#include <iostream>
using namespace std;

int n;
struct persident
{
    long long num, get;
} p[40];

bool cmp(persident x , persident y)
{
    return x.get > y.get;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        p[i].num = i;
        cin >> p[i].get;
    }
    sort(p[1], p[n], cmp);
    cout << p[1].num << endl
         << p[1].get;

    return 0;
}