#include<iostream>
#include<string>
using namespace std;

string s[110];
int n;

int main(){
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i].length()>10){
            cout << s[i][0] << s[i].length() - 2 << s[i][s[i].length()-1]<<endl;
        }
        else
            cout << s[i]<<endl;
    }
    
    
    return 0;
}