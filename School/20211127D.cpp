#include <algorithm>
#include <iostream>
using namespace std;

struct ttime
{
    int hour;
    int minute;
    int second;
    int sum;
} t[100000];

int n;

bool cmp(ttime x,ttime y){
    return x.sum < y.sum;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> t[i].hour >> t[i].minute >> t[i].second;
        t[i].sum = t[i].hour * 60 * 60 + t[i].minute * 60 + t[i].second;
    }
    sort(t, t+n,cmp);
    for (int k = 0; k < n;k++){
        cout << t[k].hour <<" "<< t[k].minute <<" "<< t[k].second<<endl;
    }

        return 0;
}