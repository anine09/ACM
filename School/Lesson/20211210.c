#include <stdio.h>

int max;
int min;
int main(void)
{
    int sum = 0;
    int n[10000];
    int num;
    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
            break;
        
            n[sum] = num;
        sum++;
    }
    max = min = n[0];
    for(int i = 0; i < sum;i++)
{
    if(n[i]>max)
        max = n[i];
    if(n[i]<min)
        min = n[i];
}
printf("min = %d\n",min);
printf("max = %d\n",max);
return 0;
}
