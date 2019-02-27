#include<stdio.h>
int main()
{
int n,a,b,i,count;
scanf("%d%d",&a,&b);
for(i=a;i<b;i++)
{
count=0;
for(n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
printf("%d\t",i);
}
	return 0;
}
