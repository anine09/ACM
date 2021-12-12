#include <algorithm>
#include <iostream>
#include<cmath>
using namespace std;

struct student
{
    int chinese;
    int math;
    int english;
    int total;
} s[1100];

int n;
int diff;
int diff_c, diff_m, diff_e;
int ans = 0;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].chinese >> s[i].math >> s[i].english;
        s[i].total = s[i].chinese + s[i].math + s[i].english;
    }
    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if(abs(s[i].total-s[k].total)<=10){
                if((abs(s[i].chinese-s[k].chinese)<=5)&&(abs(s[i].math-s[k].math)<=5)&&(abs(s[i].english-s[k].english)<=5)){
                    ans++;
                }
            }
        }
    }
    cout << ans;
    return 0;
}