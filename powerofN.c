#include <stdio.h>
#include<conio.h>
void main()
{
int i,a,result=1;
printf("\n enter the number:");
scanf("%d",&i);
printf("\n enter the power:");
scanf("%d",&a);
while(a!=0)
{
result*=i;
--a;
}
printf("\n%d",result);
return 0;
}
 
