#include<stdio.h>
#include<conio.h>
void main()
{
char i;
printf("enter the alphabet");
scanf("%c",&i);
if(i>='a'&&i<='z'|| i>='A'&&i<='Z')
{
printf("Alphabet");
}
  else
 {
 printf("No");
 }
  return 0;
}
