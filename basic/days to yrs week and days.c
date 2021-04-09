#include<stdio.h>
int main()
{
    int d,w,y;
    printf("Enter days:");
    scanf("%d",&d);
    y=d/365;
    w=(d%365)/7;
    d-=(y*365)+(w*7);
    printf("\n years: %d",y);
    printf("\n weeks: %d",w);
    printf("\n days: %d",d);
    return 0;
}