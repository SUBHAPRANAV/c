#include<studio.h>
int main()
{
int n,i,count=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%1==0)
count++;
}
if (count==0)
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
