#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter number of terms:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       sum+=i;
    }
    printf("\n sum of n natural numbers is %d",sum);

    return 0;

}
