//n(n-3)/2
#include<iostream>
using namespace std;

int main(){
    int n;
    int answer;
    cin>>n;
    answer = (n*(n-2)*(n-1)* (n - 3))/24;
    cout << answer;
    return 0;
}