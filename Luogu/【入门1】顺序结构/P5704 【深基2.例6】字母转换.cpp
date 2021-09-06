#include<iostream>
using namespace std;

int main(){

    char input_alpha;
    cin >> input_alpha;
    cout << char(int(input_alpha) - 32);

    return 0;
}