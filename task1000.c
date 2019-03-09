#include <stdio.h>
 #include<conio.h>
int main(void) 
{
	int i,remainder,product=1;
	scanf("%d",&i);
	while(i!=0)
	{
		remainder=i%10;
		product=product*remainder;
		n=n/10;
	}
	printf("\n%d",product);
	return 0;
}
