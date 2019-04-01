#include<stdio.h>
int main()
{
char a[10],b[10];
int n,m,i,j;
scanf("%s %s",&a,&b);
n=strlen(a);
m=strlen(b);
for(i=0;i<m;i++)
{
a[n]=b[i];
}
printf("%s",a);
}
