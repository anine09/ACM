#include<iostream>
using namespace std;

int is_even(int n);
int more_than_4_but_less_than_12(int n);
int num;

int main(){
    
    cin >> num;
    int a, u, b, z;
    if(is_even(num)&&more_than_4_but_less_than_12(num)){
        a = 1;
    }
    else{
        a = 0;
    }
    if(is_even(num)||more_than_4_but_less_than_12(num)){
        u = 1;
    }
    else{
        u = 0;
    }
    if(!is_even(num)&&!more_than_4_but_less_than_12(num)){
        z = 1;
    }
    else{
        z = 0;
    }
    if((is_even(num)==1&&more_than_4_but_less_than_12(num)==0)||(is_even(num)==0&&more_than_4_but_less_than_12(num)==1)){
        b = 1;
    }
    else{
        b = 0;
    }
    cout << a <<" " <<u <<" "<< b <<" "<< z;
}

int is_even(int n){
        if(n%2==0){
            return 1;
        }
        else{
            return 0;
        }
    }

int more_than_4_but_less_than_12(int n){
    if(n>4&&n<=12){
        return 1;
    }
    else{

        return 0;
    }
}