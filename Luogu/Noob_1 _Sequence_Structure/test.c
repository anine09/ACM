#include<stdio.h>
int main(){
    int A, B, C;
    double D;
    scanf("%d %d %d", &A, &B, &C);
    D = A * 0.2 + B * 0.3 + C * 0.5;
    printf("%lf", D);
    return 0;
}