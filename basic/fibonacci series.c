#include <stdio.h>
int main()
{
    int a=0,b=1,i,n,sum=0;
    printf("enter number of terms:");
    scanf("%d",&n);
    printf("\n FIBONACCI TERMS \n");
    for(i=0; i<n; i++)
    {
        if(i<=1)
        {
            sum=i;
        }
        else
        {
            sum = a + b;
            a=b;
            b=sum;
        }
        printf("\n %d",sum);
    }
    return 0;
}
