#include <algorithm>
#include <cstring>
#include <iostream>
int n;
int award[10];
int seris[10];
int num[10];
using namespace std;
int main()
{
    cin >> n;
    for (int i = 0; i < 7; i++)
    {
        cin >> award[i];
    }
    sort(award, award + 7);
    for (int i = 0; i < n; i++)
    {
        seris[i] = 0;
        for (int j = 0; j < 7; j++)
        {

            cin >> num[j];
        }
        sort(num, num + 7);
        for (int m = 0; m < 7; m++)
        {

            if (award[m] == num[m])
                seris[i]++;
        }
    }
    for (int i = 6; i >= 0; i--)
    {
        cout << seris[i] << " ";
    }
    return 0;
}