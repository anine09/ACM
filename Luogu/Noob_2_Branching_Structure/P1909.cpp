#include <cstdio>
#include <iostream>
using namespace std;

int n;
int pencil[4][4];
int answer;
int main()
{
    cin >> n;
    for (int i = 1; i <= 3; i++)
    {
        scanf("%d %d", &pencil[i][1], &pencil[i][2]);
    }
    
    return 0;
}