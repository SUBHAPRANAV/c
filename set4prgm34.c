#include<stdio.h>
int main()
{
char a[1000];
	int n,i,count=1;
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	   if(a[i]=='.'&& a[i+1]!='\0')
	    {
	        count++;
	    }
	}
	printf("%d",count);
}
