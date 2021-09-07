#include<cstdio>
#include<iostream>
using namespace std;

int a, b, c, d;

int main(){
    cin >> a >> b >> c >> d;
    int e, f;
    int total_minute;

    total_minute = (c * 60 + d) - (a * 60 + b);
    cout << total_minute / 60;
    cout << " ";
    cout << total_minute%60;

    return 0;
}