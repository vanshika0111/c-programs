#include <stdio.h>
int main()
{
   int a1[100],a2[100],a3[100];
   int n,count=0,m=1;
   int i,j;
   printf("\n TO COUNT TOTAL NUMBER OF DUPLICATE ELEMENTS \n");
   printf("Enter size of array:");
   scanf("%d",&n);
   printf("\n");
   
   printf("Enter %d elements of array:\n",n);
   for(i=0; i<n; i++)
   {
       printf("element : %d ",i);
       scanf("%d",&a1[i]);
   }
   
   //copies to second array
   for(i=0; i<n; i++)
   {
       a2[i]=a1[i];
       a3[i]=0;
   }
   
   //marking duplicate elements
   for(i=0; i<n; i++)
   {
       for(j=0; j<n; j++)
       {
           if(a1[i]==a2[j])
           {
             a3[j]=m;
             m++;
           }
       }
       m=1;
   }
   
   //prints the array
   for(i=0; i<n; i++)
   {
       if(a3[i]==2)
       {
           count++;
       }
   }
   
   printf("\n Total number of duplicate elements in the array are %d",count);
   return 0;
}