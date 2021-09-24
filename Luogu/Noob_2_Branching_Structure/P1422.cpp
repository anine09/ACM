#include <cstdio>
#include <iostream>
using namespace std;

int total_power;
double cost_money;

int main()
{
    cin >> total_power;
    if (total_power <= 150)
    {
        cost_money = total_power * 0.4463;
        
    }
    else if (total_power > 150 && total_power <= 400)
    {
        cost_money = (total_power - 150) * 0.4663 + 150 * 0.4463;
    }
    else if (total_power > 400)
    {
        cost_money = (total_power - 400) * 0.5663 + (400 - 150) * 0.4663 + 150 * 0.4463;
    }
    printf("%.1f", cost_money);
    return 0;
}