#include<stdio.h>
int main()
{
	int a1[100],a2[100];
    int n,i;
    printf("enter size of array:\n");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
       scanf("%d",&a1[i]);

    // copies the first array to another
    for(i=0;i<n;i++)
    {
       a2[i]=a1[i];
       printf("%d",a2[i]);
    }
    return 0;
}