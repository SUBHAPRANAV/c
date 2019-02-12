# include<stdio.h>
int main()
{
 int a,n,j=1;
 scanf("%d",&a);
 n=a;
 while(a!=0)
 {
  a=a/10;
  j++;
 }
 printf("%d",j);
 return 0;
 }
