#include<stdio.h>
#define MAX 50
int main()
{
   int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
   int arow, acolumn,brow,bcolumn;
   int i,j,k;
   int sum=0;
  
   //first matrix
   printf("Enter rows and column of matrix a:");
   scanf("%d %d",&arow,&acolumn);
   printf("\n Enter elements of first matrix:");
   for(i=0; i<arow; i++)
   {
        for(j=0; j<acolumn; j++)
        {
             scanf("%d", &a[i][j]);
        }
   }
   
   //second matrix
   printf("Enter rows and column of matrix b:");
   scanf("%d %d",&brow,&bcolumn);
   if(brow != acolumn)
   {
        printf("\n Multiplication not possible!");
   }
   else
   {
       printf("\n Enter elements of second matrix:");
       for(i=0; i<brow; i++)
       {
          for(j=0; j<bcolumn; j++)
           {
              scanf("%d", &b[i][j]);
           }
       }
   }
   

   //multiplication process
   for(i=0; i<arow; i++)
   {
        for(j=0; j<bcolumn;j++)
        {
            for(k=0; k<brow; k++)
             {
                  sum += a[i][k] * b[k][j];
             }
       product[i][j]=sum;
       sum =0;      
        }
  }
   

   //display of result
   printf("\n RESULTANT MATRIX\n");
   for(i=0; i<arow; i++)
   {
        for(j=0; j<bcolumn; j++)
        {
             printf("%d ",product[i][j]);
       }
       printf("\n");
   }
   return 0;
}