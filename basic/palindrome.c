#include<stdio.h>
int main()
{
   int n,reverse=0,remainder,original;
   printf("\n\n enter an integer:");
   scanf("%d",&n);
   original=n;
   while(n!=0)
   {
     remainder=n%10;
     reverse=reverse*10+remainder;
     n/=10;
   }
   if(original==reverse)
     printf("\n %d is palindrome",original);
   else
     printf("\n %d is not palindrome",original);
   return 0;
}