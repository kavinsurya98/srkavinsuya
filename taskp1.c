#include <stdio.h>
#include<conio.h>
void main()
{
    char s[100];
    int i,l=0;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    
      {
        printf("%c",s[i]);
    }

    getch ();
}
