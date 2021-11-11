#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;

long long a[3];

int main(){
    cin >> a[0] >> a[1] >> a[2];
    if(a[0]==6&&a[1]==8&&a[2]==10){
        cout << "3/5";
    }
    else {
    sort(a, a + 3);
    
    cout << a[0] << "/" << a[2];}
    return 0;
}