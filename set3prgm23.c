#include<conio.h>
int main()
{
int a,i,min;
	scanf("%d",&n);
	int x[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&x[i]);
	}
		min=x[0];
	for(i=1;i<a;i++)
	{
	if(min>x[i])
	{
		min=x[i];
	}
	}
	printf("%d",min);
  }
