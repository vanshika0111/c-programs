#include <stdio.h>

int main()
{
    int multiply[10];
    int number;
    printf("Enter the number for its table: ");
    scanf("%d",&number);
 
    for(int i=0; i<10;i++)
    {
         multiply[i] = number *(i+1);
    }
    
    for(int i=0; i<10;i++)
    {
         printf(" %d x %d = %d \n",number, i+1, multiply[i]);
    }

    return 0;

}