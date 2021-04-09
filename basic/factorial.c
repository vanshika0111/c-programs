#include <stdio.h>
int main()
{
    
    int i,n,fact=1;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       fact*=i; 
    }
    printf("\n factorial of %d is %d",n,fact);
    return 0;
}
