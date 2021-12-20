#include<iostream>
using namespace std;


int main(){
    int n;
    int ans = 0;
    int num[1010];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c>=2){
            num[i] = 1;
        }
        else
            num[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        ans += num[i];
    }
    cout << ans;
    return 0;
}