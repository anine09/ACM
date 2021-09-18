#include<iostream>
using namespace std;
int num;
string min(int a, int b);
int main(){
    cin >> num;
    int luogu, local;
    local = num * 5;
    luogu = num * 3 + 11;
    cout<<min(luogu, local);
    return 0;
}

string min(int luogu,int local){
    if(luogu<local){
        return "Luogu";
    }
    else if(local < luogu){
        return "Local";
    }
}