#include<stdio.h>
#include<math.h>
void power(int a, int b);
int main()

{
    int x,y;
    printf("Enter base value: ");
    scanf("%d",&x);
    printf("\n Enter power: ");
    scanf("%d",&y);
    power(x,y);
    return 0;
}


void power(int a, int b)
{
     double c;
     c= pow(a,b);
     printf("Answer= %.1f",c);
    
}
    