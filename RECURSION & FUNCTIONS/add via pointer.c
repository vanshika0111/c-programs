#include<stdio.h>
long addTwoNumbers(long *,long *);
int main()
{
	long fno,sno,sum;

	printf("Input first number:");
	scanf("%ld",&fno);
	printf("\n Input second number:");
	scanf("%ld",&sno);
	sum=addTwoNumbers(&fno, &sno);
	printf("The sum of %d and %d is %d\n\n",fno,sno,sum);
	getch();
}

long addTwoNumbers(long *n1,long *n2)
{
	long sum;
	sum = *n1 + *n2;
	return sum;
}