#include <stdio.h>
float avg(int a, int b, int c);
int main()
{   
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n The average of entered three numbers is %f",avg(a,b,c));
    return 0;

}



float avg(int a, int b, int c)
{
      return (float)(a+b+c)/3;
}