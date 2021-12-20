#include<iostream>
#include<algorithm>
using namespace std;

int n;
long long L[20],R[20];
long long between[20];
long long ans;

int main(){
    cin>>n;
    for (long long i = 0; i < n ; i++)

    {
        cin >> L[i] >> R[i];
        between[i] = R[i] - L[i] + 1;
    }
    for (int k = 0; k < n; k++)
    {
        ans = 0;
        for (int m = L[k]; m <=R[k]; m++)
        {
            ans += m;
        }
        if (ans%3==0)       
        {
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    


    
    return 0;
}