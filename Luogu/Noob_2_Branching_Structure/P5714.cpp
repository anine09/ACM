#include<iostream>
using namespace std;
double m, n;
int main(){
    cin >> m >> n;
    double bmi;
    bmi = m / (n*n);
    if(bmi<18.5){
        cout << "Underweight";
    }
    else if(bmi>=18.5&&bmi<24){
        cout << "Normal";
    }
    else if (bmi > 24){
        cout << bmi << endl
             << "Overweight";
    }
        return 0;
}