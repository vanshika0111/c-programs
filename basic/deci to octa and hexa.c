#include<stdio.h>
int main()
{
    int x;
    printf("enter decimal number:");
    scanf("%d",&x);
    printf("\n decimal number:",x);
    printf("\n hexadecimal number: %x",x);
    printf("\n octadecimal number: %o",x);
    return 0;
}