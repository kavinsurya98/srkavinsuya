#include<stdio.h>
#include<conio.h>
void main() 
{
	int n,fact=1,i;
	scanf("%d",&n);
	if(n>0)
	{
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	}
	printf("%d",fact);
	return 0;
}
