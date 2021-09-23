#include<cstdio>
#include<iostream>
using namespace std;
int week[7][4];
int unhappy[7][2];
int unhappy_sort(int a[10][10]);
int main(){
    for (int i = 1; i <= 7;i++){
        cin >> week[i][1] >> week[i][2];
    }
    for (int i = 1; i <= 7;i++){
        week[i][3] = week[i][1] + week[i][2];
    }
    for (int i = 1; i <= 7;i++){
        if(week[i][3]>8){
            unhappy[i][1] = week[i][3];
        }
        else{
            unhappy[i][1] = 0;
        }
    }

    return 0;
}

int unhappy_sort(int a[10][10]){
    //差一个稳定排序算法
}