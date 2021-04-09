#include<stdio.h>
#include<stdlib.h>
void main()
{
	int fno,sno, *ptr1=&fno, *ptr2=&sno;

	printf("input first number:\n");
	scanf("%d",ptr1);

	printf("input second number:\n");
	scanf("%d",ptr2);
	
	if(*ptr1>*ptr2)
	{
	 printf("\n\n %d is the maximum number\n",*ptr1);
	}
	else
	{
	 printf("\n\n %d is the maximum number\n",*ptr2);
	}
	return 0;
}