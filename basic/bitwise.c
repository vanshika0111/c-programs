#include <stdio.h>
int main()
{
    int x,m,d;
    printf("enter number:");
    scanf("%d",&x);
    m=x<<1;
    d=x>>1;
    printf("\n multiplication of %d by 2 is %d",x,m);
    printf("\n division of %d by 2 is %d",x,d);
    return 0;
}