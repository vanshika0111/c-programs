#include <stdio.h>
#define pi 3.14
int main()
{
    int r;
    float a,c;
    printf("Enter radius: ");
    scanf("%d",&r);
    a=pi*r*r;
    c=2*pi*r;
    printf("\n Area of circle = %f",a);
    printf("\n Circumference of circle = %f",c);
    return 0;
}
