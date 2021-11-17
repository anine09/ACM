
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
    sort(T, T + n+1);
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



/*
#include<cstdio>
#include<algorithm>
using namespace std;
struct node
{
    int n,t; 
} ;
struct node t[1010];
bool cmp(node x,node y)
{
    return x.t<y.t;
}
int main()
{
    int n,sum=0,i;
    double ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i].t);
        t[i].n=i+1;
    }
    sort(t,t+n,cmp);
    int j=n-1;
    for(i=0;i<n;i++)
    {
        ans=ans+j*t[i].t;
        printf("%d ",t[i].n);
        j--;
    }
    printf("\n");
    printf("%.2f",ans/n);
    return 0;
}
*/