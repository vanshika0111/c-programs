#include <stdio.h>
int main()
{
    int n,reverse=0,r;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("\n");
    while(n!=0)
    {
        r = n%10;
        reverse = reverse * 10 + r;
        n/=10;
    }
    printf("\n Reversed number is %d",reverse);
    return 0;
}
