#include<conio.h>
#include<stdio.h>           

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a^b;                                  
    b=a^b;                                   
    a=a^b;                                    
    return 0;
}
