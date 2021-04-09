#include <stdio.h>
int main()
{
	int a1[100];
	int i,max,min,n;


	printf("Enter size of array;\n");
	scanf("%d",&n);
	printf("Enter %d elements of array:\n",n);
	for(i=0;i<n;i++)
	{
	  printf("element-%d:",i);
      scanf("%d",&a1[i]);
	}
    
    //declaring the first index as maximum and minimum
    max=a1[0]
    min=a1[0];

	for(i=1;i<n;i++)
	{
	  if(a1[i]>max)
	     max=a1[i];
	  if(a1[i]<min)
	     min=a1[i];
	}

    //displaying the maximum and minimum element
	printf("Maximum element is %d\n",max);
	printf("Minimum element is %d",min);

	return 0;

}

