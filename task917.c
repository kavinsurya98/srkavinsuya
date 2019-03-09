#include<stdio.h>
#include<conio.h>
void main()
{
    int i,rev=0,rem=0;
    scanf("%d",&i);
    while(i!='\0')
    {
        rem=i%10;
        rev=(rev*10)+rem;
        i=i/10;
    }
    printf("%d",rev);
}
