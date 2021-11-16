#include<cstdio>
#include<iostream>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n1, n2;
vector<int> num1;
vector<int> num2;
vector<int> same;
//int same[1000000];
int main()
{
    cin >> n1 >> n2;
    for (int i = 0; i < n1;i++){
        cin >> num1[i];
    }
    for (int k = 0; k < n2;k++){
        cin >> num2[k];
    }
    for (int m = 0; m < n1;m++){
        for (int a = 0; a < n2;a++){
            if(num1[m]==num2[a]){
                same[m] = num1[m];
            }
            else{
                same[m] = 0;
            }
        }
    }
    
    return 0;
}