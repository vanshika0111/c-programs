#include<stdio.h>
int main()
{
	int a1[100];
	int n,i,j,temp;

	printf("\n selection sort of array in descending order\n");
	printf("\n-------------------------------------------\n");

	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf(" \n enter elements of array:\n");
	for(i=0;i<n;i++)
	{
  	  printf("element - %d : ",i);
	  scanf("%d",&a1[i]);
	}

	for(i=0;i<n;i++)
	{
	 for(j=i+1;j<n;j++)
	 {
	  if(a1[j]>a1[i])
	  {
	    temp=a1[i];
	    a1[i]=a1[j];
	    a1[j]=temp;
	  }
	 }
	}

	printf("\n elements in sorted descending order :\n");
	for(i=0;i<n;i++)
	{
	 printf("%d",a1[i]);
	}
	printf("\n");
	return 0;
	}
