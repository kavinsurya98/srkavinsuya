#include<stdio.h>
#include<conio.h>
void main()
{
int c,d,flag;
printf("enter the c and d:",c,d);
while(c<d)
{
int i,flag=0;
for(i=2;i<=c/2;i++)
{
if(c%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",&c);
++c;
}
return 0;
}
