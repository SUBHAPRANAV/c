# include<stdio.h>
void main()
{
int i;
char a[50],b[50];
scanf("%s",a);
strcpy(b,a);p
strrev(a);
printf("%s",a);
i=strcmp(a,b);
prinbtf("%d",i);
if(i==0)
{
printf("palindrome");
}
else
{
printf("Not palindrome");
}
return 0;
}
