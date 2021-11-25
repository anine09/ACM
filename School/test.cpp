#include <cstdio>
using namespace std;

double a, b, c;

int main()
{

    scanf("%lf %lf %lf", &a, &b, &c);
    if (a<=0||b<=0||c<=0)
        printf("Input Error");
    else if (a + b > c && a + c > b && b + c > a)
        printf("Yes");

    
    else
        printf("No");
    return 0;
}