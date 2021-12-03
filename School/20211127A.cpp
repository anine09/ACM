#include <iostream>
using namespace std;

int i = 1, k, n = 1;
long long ans = 0;

int main()
{

    cin >> k;
    while ((i + n) <= k)
    {
        ans +=  n * n;
        i += n;
        n++;
    }

    ans += n * (k + 1 - i);
    cout << ans;
    return 0;
}