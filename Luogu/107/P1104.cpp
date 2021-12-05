#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

struct student
{
    string name;
    int year;
    int month;
    int day;
    int num;
} s[110];

int n;

bool cmp(student a,student b){
    if(a.year==b.year){
        if (a.month==b.month)
        {
            if(a.day==b.day)
                return a.num > b.num;
            else
                return a.day < b.day;
        }
        else
            return a.month < b.month;
    }
    return a.year < b.year;
}

int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].year >> s[i].month >> s[i].day;
        s[i].num = i;
    }

    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << endl;
    }
    
    return 0;
}