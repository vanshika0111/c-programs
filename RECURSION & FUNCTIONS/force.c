#include <stdio.h>
float force(float m);
int main()
{
    float m;
    printf("Enter mass of any body in kgs:");
    scanf("%f",&m);
    printf("\n The force exerted by the earth on the body of mass %.2f kg is %.2f Newton",m,force(m));

    return 0;
}



float force(float m)
{
    float result;
    result=m*9.8;
    return result;

}
