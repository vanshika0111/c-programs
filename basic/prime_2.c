#include <stdio.h>
int main()
{
   int i,n,p=0;
   printf("\n PRIME NUMBER TEST \n");
   printf("\n Enter any number:");
   scanf("%d",&n);
   printf("\n");
   for(i=2; i<=n/2; i++)
   {
       if(n%i==0)
       {
           p++;
       }
   }
   if(p==2)
   {
       printf("%d is a prime number",n);
   }
   else
   {
       printf("%d is not a prime number",n);
   }
   return 0;
}
