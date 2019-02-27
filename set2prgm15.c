#include<stdio.h>
int main()
{
int x,y,i;
	scanf("%d%d",&x,&y);
	for(i=x+1;i<y;i++)
	{
	if(i%2==0)
            printf("%d",i);
	}
	return 0;
}
