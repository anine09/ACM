#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int n;
struct birthday
{
    string name;
    int year;
    int month;
    int day;
    int num;
    int ans;
} b[110];

bool cmp(birthday x,birthday y){
    if(x.ans==y.ans)
        return x.num > y.num;
    return x.year < y.year;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i].name >> b[i].year >> b[i].month >> b[i].day;
        b[i].num = i;
    }
    stable_sort(b, b + n+1, cmp);
    for (int i = 1; i <= n;i++){
        cout << b[i].name<<endl;
    }
        return 0;
}