#include<cstdio>
using namespace std;

float t;
int n;

int main(){

    scanf("%f %d", &t, &n);

    int cup;
    float milliliter;

    cup = n * 2;
    milliliter = t / n;

    printf("%.3f\n%d", milliliter, cup);

    return 0;
}