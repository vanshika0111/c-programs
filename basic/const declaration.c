#include<stdio.h>
int main()
{
    const int maxInput=10;
    int i;
    double number, avg, sum=0.0;
    
    for(i=1; i<= maxInput; ++i)
    {
        printf("%d. Enter a number: ",i);
        scanf("%lf",&number);
        
        //go to jump if the user enters a negative number
        if(number < 0.0)
       {
            goto jump;
       }
       sum += number; 
    }
    jump:
    avg=sum / (i-1);
    printf("\n Sum = %.2f",sum);
    printf("\n Average = %.2f",avg);
    return 0;
}