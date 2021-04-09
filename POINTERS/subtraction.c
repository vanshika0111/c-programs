#include<stdio.h>
int main()
{
	int n1,n2, *p, *q, sub=0;

	printf("Input first element:");
	scanf("%d",&n1);
	
	printf("\nInput second element:");
	scanf("%d",&n2);

	p= &n1;
	q= &n2;
	sub=sub + *p - *q;
	printf("\n subtraction: %d",sub);
	return 0;
}