#include<cstdio>
#include<iostream>
using namespace std;

int m, t, s;

int main(){
    cin >> m >> t >> s;
    int total_time;//total time when ate all the apples.
    int num;
    total_time = m * t;

    if(t!=0&&t<total_time&&(total_time%t==0)){
    num=(total_time - s) / t;
    cout << num;}
    else {
        cout << 0;
    }
    return 0;
}