#include<stdio.h>
#include<conio.h>
int main();
{
char ch;
scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
{
printf("Alphabet");
}
else
{
printf("Not Alphabet");
}
return 0;
}
