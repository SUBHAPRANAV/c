# include<stdio.h>
int main()
{
int n, reverse = 0, temp;
scanf("%d",&n);
temp = n;
 while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }

   if ( n == reverse )
      printf("%d palindrome", n);
   else
      printf("%d not a palindrome", n);

   return 0;
}
