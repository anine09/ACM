#include<iostream>
#include<algorithm>
using namespace std;

int num[100000];
int n;


int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    stable_sort(num, num + n);

    for (int i = 0; i < n - 1;i++){
        cout << num[i] << " ";
    }
    cout << num[n-1];

    return 0;
}