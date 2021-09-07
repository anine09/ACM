#include<iostream>
#include<cstdio>
using namespace std;

char a, b, c, e;
int main(){
    scanf("%c%c%c.%c", &a, &b, &c, &e);
    printf("%c.%c%c%c", e, c, b, a);
    return 0;
}