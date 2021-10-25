#include <cstdio>
#include<iostream>
using namespace std;

int question_num;
int piles[10][10];
int alice, bob;

int main()
{
    cin >> question_num;
    for (int i = 0; i < question_num; i++){
        scanf("%d %d %d", &piles[i][1],&piles[i][2],&piles[i][3]);
    }
    for (int i = 0; i < question_num; i++){
        cout<<piles[i][1]<<piles[i][2]<<piles[i][3];
    }

    

        return 0;
}