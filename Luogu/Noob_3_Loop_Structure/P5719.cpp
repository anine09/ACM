#include <iostream>
#include<cstdio>
using namespace std;

int n, k;

int main()
{
    cin >> n >> k;
    int B[100000];
    int A[100000];
    int num = 1;
    double num_A = 0, num_B = 0;
    double avg_A = 0, avg_B = 0;
    double sum_A = 0, sum_B = 0;
    for (int i = 0; i < n; i++)
    {
        B[i] = num;
        num++;
    }
    for (int i = 0; i < n; i++)
    {
        if (B[i] % k == 0)
        {
            A[i] = B[i];
            B[i] = 0;
            num_A++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (B[i] != 0)
        {
            num_B++;
        }
    }
    for (int i = 0; i < n; i++){
        sum_A += A[i];
        sum_B += B[i];
    }
    avg_A = sum_A / num_A;
    avg_B = sum_B / num_B;
    printf("%.1lf %.1lf",avg_A,avg_B);
    
    return 0;
}