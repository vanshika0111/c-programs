#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg);
int main()
{
    int a=3,b=2,sum;
    float avg;
    sumAndAvg(a,b,&sum,&avg);
    printf("\n sum of numbers is %d",sum);
    printf("\n average of numbers is %f",avg);
    return 0;
}



void sumAndAvg(int a, int b, int *sum, float *avg)
{
      *sum = a+b;
      *avg = (float) *sum/2;
   
}
