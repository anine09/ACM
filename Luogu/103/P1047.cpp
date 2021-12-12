#include <iostream>
#include<cstring>
using namespace std;

int l;
int m;
int tree[100000];

int u, v;

int main()
{
    cin >> l >> m;
    for (int i = 0; i <=l; i++)
    {
        tree[i] = 1;
    }
    
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;

        for (; u <= v;u++)
        {
            tree[u] = 0;
        }
    }
    int ans = 0;
    for (int i = 0; i <=l; i++)
    {
        ans += tree[i];
    }

    cout << ans;
    return 0;
}