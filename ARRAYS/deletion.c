#include<stdio.h>
int main()
{
    int a1[100],i,pos,n;
    printf("enter size of array:");
	scanf("%d",&n);

	printf("\nenter elements of array:\n");
	for(i=0;i<n;i++)
	{
 		printf("element - %d:",i);
 		scanf("%d",&a1[i]);
	}
    
    //deletion starts here
	printf("\nenter the position of deletion:");
	scanf("%d",&pos);
	i=0;
	while(i!=pos-1)
	{
        i++;
 	}
	while(i<n)
	{
        a1[i]=a1[i+1];
        i++;
	}
	n--;

	printf("\n the new list is:\n");
	for(i=0;i<n;i++)
	{
 		printf("%d",a1[i]);
	}
	printf("\n\n");
	return 0;
	}