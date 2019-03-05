#inculde<stdio.h>
#include<conio.h>
void main()
{
int a,b;
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
int t,rem,sum=0;
t=i;
while(t!=0)
{
rem=t%10;
sum=sum+rem*rem*rem;
t=t/10;
}
if(sum==i)
{
printf("%d\n",sum);
}
else
continue;
}
return 0;
}
