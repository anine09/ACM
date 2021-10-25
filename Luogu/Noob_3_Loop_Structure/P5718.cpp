#include <algorithm>
#include <iostream>
using namespace std;

int n;
int a[1000];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a + 0, a + n);
    cout << a[0];
    return 0;
}