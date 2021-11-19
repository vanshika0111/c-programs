// program to convert temperature from c to f

#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in F:");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("\n temperature in f: %f",f);
    printf("\n temperature in c: %f",c);
    return 0;
}
