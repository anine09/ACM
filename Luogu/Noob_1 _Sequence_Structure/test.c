#include<stdio.h>

int main(){

    int c1;
    scanf("%d", &c1);
    double answer;
    answer = c1 + 'A' + 38.7856;
    printf("% (1).1lf", answer);

    return 0;
}