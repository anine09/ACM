#include<cstdio>
#include<iostream>
using namespace std;
int week[7][4];
int main(){
    for (int i = 1; i <= 7;i++){
        cin >> week[i][1] >> week[i][2];
    }
    for (int i = 1; i <= 7;i++){
        cout<< week[i][1] << week[i][2];
    }
        return 0;
}