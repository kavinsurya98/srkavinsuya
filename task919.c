#include <stdio.h>
#include<conio.h>
int main()
{
	int a,b,d,res=0;
	scanf("%d %d %d",&a,&b,&d);
	res=(a*b)%d;
	printf("%d",res);
	return 0;
}
