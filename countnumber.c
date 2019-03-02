 #include<stdio.h>
 int main()
 {
 int k,n,j=1;
 scanf("%d",&k);
 n=k;
 while(k!=0)
 {
  k=k/10;
  if(k!=0)
  j++;
 }
 printf("%d",j);
 }
