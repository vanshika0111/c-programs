#include <stdio.h>
int main()
{
    int l,b,a,p;
    printf("Enter length: ");
    scanf("%d",&l);
    printf("\n Enter breadth: ");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("\n Area of rectangle = %d",a);
    printf("\n Perimater of rectangle = %d",p);
    return 0;
}