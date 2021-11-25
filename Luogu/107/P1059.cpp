#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n;
int num[110];


int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    sort(num, num + n);
    int ans = 0;
    for (int k = 0; k < n;k++){

        if (num[k]!=num[k+1])
        {
            ans++;
        }
        
    }
    cout << ans << endl;
    for (int m = 0; m < n; m++)
    {
        if(num[m]!=num[m+1])
        cout << num[m] << " ";
    }
    
        return 0;
}