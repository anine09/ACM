#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

struct num
{
    string s;
    int first_num;
} s[30];

int n;

bool cmp(num a, num b)
{

    if (a.first_num == b.first_num)
        return *(a.s.end() - 1) < *b.s.begin();
    return a.first_num > b.first_num;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].s;
        s[i].first_num = s[i].s[0];
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << s[i].s;
    }

    return 0;
}