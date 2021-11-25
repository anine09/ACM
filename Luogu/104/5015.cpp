#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;

string s;
int ans = 0;

int main(){
    getline(cin,s);
    for (int i = 0; i < s.length();i++){
        if(isalnum(s[i])){
            ans++;
        }
    }
    cout << ans;
    return 0;
}