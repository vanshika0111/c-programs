#include <stdio.h>
int main()
{
    int p,r,n,i;
    printf("enter principal amount:");
    scanf("%d",&p);
    printf("\n enter rate of interest:");
    scanf("%d",&r);
    printf("\n enter number of years:");
    scanf("%d",&n);
    i=(p*r*n)/100;
    printf("\n simple interest:%d ",i);
    return 0;

}
