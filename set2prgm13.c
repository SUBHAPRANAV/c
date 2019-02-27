#include<studio.h>
int main()
{
int n,i,flag=0;
scanf(""%d",&n);
for(i=0;i<=n/2;i++)
{
if(n%1==0)
{
flag=1;
break;
}
}
else
{
if(flag==0)
{
printf("Yes");
}
else
{
printf("No");
}
}
return 0;
}
