#include<stdio.h>
int main()
{
    char c;
    printf("enter lowercase character:");
    c=getchar();
    putchar(c);
    printf("up[ercase character:");
    putchar(c-32);
    return 0;
}