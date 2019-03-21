#include<stdio.h>
int main()
{
int n,i;
int f2=1,f2=1,f3=2;
scanf("%d",&n);
 printf("%d  %d  ",f1,f2);
 for(i=2;i<n;i++)
 {
   f3=f1+f2;
   printf("%d  ",f3);
   f1=f2;
   f2=f3;
    }
}
