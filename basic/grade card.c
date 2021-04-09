#include <stdio.h>
int main()
{
    int s1,s2,s3,total;
    float avg,p;
    printf("Total marks per subject is 100\n");
    printf("\n Enter first subject marks:");
    scanf("%d",&s1);
    printf("\n Enter second subject marks:");
    scanf("%d",&s2);
    printf("\n Enter third subject marks:");
    scanf("%d",&s3);
    total = s1 + s2 +s3;
    avg=total/3;
    p=(total/300.0)*100;
    printf("\n Grand total: %d",total);
    printf("\n Average: %f",avg);
    printf("\n Percentage: %f",p);
    

if(p>80 && p<100)
    printf("\n Distinction");
   
else if(p>60 && p<79)
    printf("\n First class");
   
else if(p>40 && p<59)
    printf("\n Second class");
   
else
    printf("\n Fail");
    

return 0;

}