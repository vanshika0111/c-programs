#include<stdio.h>
void main()
{
	int a1[100],i,n,p,x;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("\ninput %d elements in array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("\nElement - %d : ",i);
		scanf("%d", &a1[i]);
	}

	//insertion starts here
	printf("\ninput element to be inserted: ");
	scanf("%d",&x);
	printf("\ninput the position for insertion: ");
	scanf("%d",&p);

	printf("\nthe current list of array:\n");
	for(i=0;i<n;i++)
	   printf("%5d",a1[i]);
	for(i=n;i>=p;i--)
	   a1[i]=a1[i-1];
 
	a1[p-1]=x;
	printf("\n\n insert the new element in the new list:\n");
	for(i=0;i<=n;i++)
	   printf("%5d",a1[i]);
	   printf("\n\n");
	return 0;
}