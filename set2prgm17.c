#include <stdio.h>
int main()
{
int num,v,result,digit;
scanf("%d",&num);
v=num;
while(v!=0)
{
digit=v%10;
result+=digit*digit*digit;
v=v/10;
}
if(result==num)
{
printf("Amstrong Number");
}
else
{
printf("Not a Amstrong Number");
}
return 0; 
}
