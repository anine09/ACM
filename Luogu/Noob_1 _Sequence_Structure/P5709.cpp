#include<cmath>
#include<iostream>
using namespace std;

int m, t, s;

int main(){
    cin >> m >> t >> s;
    int num;
    double apple_now;
    if(t==0){
        cout << 0;
    }
    else{
        apple_now = s / t;
        num = m - ceil(apple_now);
        if (num <= 0)
            cout << 0;
        else if(s%t!=0)
            cout << num-1;
        else
            cout << num;
    }
    return 0;
}