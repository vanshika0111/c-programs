#include<stdio.h>
int main()
{
int a1[3][3],a2[3][3],a3[3][3];
int i,j;

printf("\n Enter 9 elements of first matrix:\n");
for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
       scanf("%d",&a1[i][j]);
    }
 }


printf("\n Enter 9 elements of second matrix:\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    scanf("%d",&a2[i][j]);
  }
}


//displays first matrix
printf("\n the first matrix is :\n");
for(i=0;i<3;i++)
{
  printf("\n");
  for(j=0;j<3;j++)
    printf("%d\t",a1[i][j]);
}

//displays second matrix
printf("\n the second matrix is:\n");
for(i=0;i<3;i++)
{
  printf("\n");
  for(j=0;j<3;j++)
    printf("%d\t",a2[i][j]);
}

printf("\n\n");


//subtraction
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
  {
    a3[i][j]=a1[i][j]-a2[i][j];
    printf("%d ",a3[i][j]);
  }
  printf("\n");
}

return 0;

}








