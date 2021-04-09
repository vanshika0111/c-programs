#include<stdio.h>
int main()
{
    int a1[25],n;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\n Enter %d elements\n",n);
    for(int i=0; i<n; i++)
    {
         printf("element - %d : ",i);
         scanf("%d",a1+i);
    }
    
    
    //copies the entered array into another array
    printf("\n the elements you entered are:\n");
    for(int i=0; i<n; i++)
    {
         printf("element - %d : %d\n",i,*(a1+i));
    }
    return 0;

}