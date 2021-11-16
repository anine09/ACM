#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int n;
vector<int> l;
vector<int> r;
vector<int> num;
vector<int> ans;

int main(){
    cin>>n;
    for (int i = 0; i < n;i++){
        cin >> l[i] >> r[i];

    }
    for (int i = 0; i < n;i++){
        int k = 0;
        for (l[i]; l[i] <= r[i];l[i]++){
            num[k] = l[i];
            k++;
        }
        int m = r[i] - l[i];
        int times = 0;
        while (m)
        {
            times = num[m] * num[m];
            if(times>=l[i]&&times<=r[i]){
                ans[i] += 1;
            }
            m--;
        }
        
        
    }

    for (int i = 0; i < n;i++){
        cout << ans[i];
    }
        return 0;
}