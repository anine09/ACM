#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int num[4];
char sortChar;

int main()
{
    cin >> num[1] >> num[2] >> num[3];
    sort(num, num + 4);
    for (int i = 0; i < 3; i++)
    {
        
        //switch (scanf("%s",&sortChar))
        cin >> sortChar;
        switch (sortChar)
        
        {
        case 65:
            cout << num[1] << ' ';
            break;
        case 66:
            cout << num[2] << ' ';
            break;
        case 67:
            cout << num[3] << ' ';
            break;

        default:
            break;
            
        }
    }
    return 0;
}