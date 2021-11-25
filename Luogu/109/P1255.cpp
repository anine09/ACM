#include<iostream>
using namespace std;

int how_time(int a){
    if(a==1)
        return 1;
    else
        return how_time(a);
}

int main(){
    int num;
    cin >> num;
    cout << how_time(num);
    return 0;
}

/*

1 --- 1 =1
2 --- 11 2 =2
3 --- 111 12 21 =3
4 --- 1111 121 211 112 122*/