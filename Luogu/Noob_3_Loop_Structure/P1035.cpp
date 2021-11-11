#include<cstdio>
#include<iostream>
using namespace std;
int k, n=0;
double sum = 0;
int main(){
    cin >> k;
    do{
        n++;
        sum += (1.0 / n);
    } while (sum <= k);
    cout << n;
    return 0;
}