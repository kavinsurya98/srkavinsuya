#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the number");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("a is larger");
}
else if(b>a &&b>c)
{
printf("b is larger");
}
else if(c>a && c>b)
{
printf("c is larger");
}
return 0;
}
