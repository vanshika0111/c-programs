#include <stdio.h>
int main()
{
    int i,n,prime=1;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0 && i!=2)
        {
            prime=0;
            break;
        }
    }
    if(prime==0)
    {
        printf("\n %d is not a prime number",n);
    }
    else
    {
        printf("\n %d is a prime number",n);
    }
    return 0;
}
