#include <stdio.h>
#include<conio.h>
int main()
{
	int n,k;
	float res;
	scanf("%d %d",&n,&k);
	res=n>>k;
	printf("%.2f",res);
	return 0;
}
