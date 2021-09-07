#include<iostream>
#include<cstdio>
using namespace std;

int a, b;
int pen_pay = 19;

int main(){
    cin >> a >> b;
    int total_money;
    int pen_num;
    total_money = a * 10 + b;
    pen_num = (total_money / pen_pay);
    cout << pen_num;
    return 0;
}