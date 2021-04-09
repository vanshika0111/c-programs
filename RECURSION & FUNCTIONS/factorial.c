#include <stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("\n The factorial of %d is %d",n,fact(n));
    return 0;
}



int fact(int n)
{
      if(n==1 || n==0)
      { 
            return 1;
      }
      else
      {
        return n*fact(n-1);
      }
}