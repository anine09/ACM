#include<iostream>
#include<cmath>
using namespace std;
double a;
int day = 1;
int main(){
    cin>>a;
    while(a!=1){
        a = ceil(a / 2);
        day++;
    }
    cout << day-1;
    return 0;
}