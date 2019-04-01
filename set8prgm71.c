#include<stdio.h>
int main()
{
char a[100],b[100];
int l,i,j,count=0;
scanf("%s",a);
l=strlen(a);
j=0;
for(i=l-1;i>=0;i--)
{
b[i]=a[j];
j=j+1;
}
for(i=0;i<l;i++)
{
if(a[i]==b[i])
count++;
else
continue;       
}
if(count==l)
printf("yes");
else
printf("no");
}
