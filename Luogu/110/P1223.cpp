#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int n;
int ans = 0;
struct person
{
    int time;
    int num;
} water[1010];

bool cmp(person x, person y)
{
    return x.time > y.time;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &water[i].time);
        water->num = i;
    }
    sort(water, water + n + 1, cmp);
    for (int i = 0; i < n; i++)
    {

    }

    return 0;
}

/*
#include<algorithm>
#include<cstdio>
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