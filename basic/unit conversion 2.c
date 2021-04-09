#include <stdio.h>
int main()
{
    float km,m,feet,inch,cm;
    printf("Enter distance in km:");
    scanf("%f",&km);
    printf("\n");
    m=km*1000;
    feet=km*3280.84;
    inch=km*39370.1;
    cm=km*100000;
    printf("\n The distance in kilometers is %f",km);
    printf("\n The distance in metres is %f",m);
    printf("\n The distance in feets is %f",feet);
    printf("\n The distance in inches is %f",inch);
    printf("\n The distance in centimetres is %f",cm);
    return 0; 
    
}
