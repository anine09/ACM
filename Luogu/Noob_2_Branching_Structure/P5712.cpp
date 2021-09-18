#include<iostream>
using namespace std;

int num;

int main(){
    cin >> num;


    if(num<=1){
        cout << "Today, I ate " << num << " apple.";
    }
    else{
        cout << "Today, I ate " << num << " apples.";
    }
    return 0;
}