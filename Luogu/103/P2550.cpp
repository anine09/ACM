#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int n;
string the_num[7];

struct Number
{
    int no;
    string num;
} number[10000];

int main()
{
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> the_num[i];
    }
    for (int i = 0; i < n; i++)
    {
        number[i].no = i;
        for (int k = 0; k < 7; k++)
        {
            getline(number[i].num,stdin);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int m = 0; m < 7;m++){
            if()
        }
    }

    return 0;
}