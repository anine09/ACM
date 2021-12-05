#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct num{
    string s;
    int the_num;
}s[30];
int n;

bool cmp(num a,num b){
    int a_num = a.s[0]
    return a.first_num > b.first_num;
}

int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].s;
        
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << s[i].s;
    }
    

    return 0;
}