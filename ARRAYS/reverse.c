#include<stdio.h>
#define N 5
int main()
{
	int a[5];
	int i;

	printf("enter array:\n");
	for(i=0;i<5;i++)
 	{	 
 		scanf("%d",&a[i]);
	}	

	printf("Reverse array is :\n");
	for(i=4;i>=0;i--)
 	{	 
 		printf("%d",a[i]);	
 	}
	return 0;

}