#include <stdio.h>
int main()
{
  double i,n=0,sum=0,j;
  for(;;)
  {
    scanf("%lf",&j);
	if(!(j>=0&&j<=100)&&j!=-1){printf("input error");break;}
	if(j==-1)
        break;
    sum+=j;
	n++;
}
   double aver;
   aver=sum/n;
   printf("%lf\n",aver);
   return 0;
}
