#include<iostream>
#include<cstdio>
using namespace std;
int n;
int ans[100000];
char num[1000000];
int main(){
    cin >> n;
    for (int i = 0; i < n;i++){
        int k = 0;
        while (scanf("%s",num[k])!='\n')
        {
            ans[i] += (int)num[k];
            k++;
                }
        
    }
    for (int i = 0; i < n;i++){
        cout << ans[i];
    }

        return 0;
}