#include<stdio.h>
int main()
{
	int n1,n2, *p, *q, add=0;

	printf("Input first element:");
	scanf("%d",&n1);
	
	printf("\nInput second element:");
	scanf("%d",&n2);

	p= &n1;
	q= &n2;
	add=add + *p + *q;
	printf("\n addition: %d",add);
	return 0;
}