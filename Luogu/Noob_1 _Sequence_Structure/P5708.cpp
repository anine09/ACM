#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
//不就是海伦公式嘛
double a, b, c;
int main(){
    cin >> a >> b >> c;
    double p, S;

    p = 0.5 * (a + b + c);
    S = sqrt(p*(p - a)*(p - b)*(p - c));
    printf("%.1lf", S);

    return 0;
}