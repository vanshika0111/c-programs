#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
 	int n1,n2,tmp;
 
 	printf("input first number:");
 	scanf("%d",&n1);
 	printf("\ninput second number:");
 	scanf("%d",&n2);
 	printf("before swapping: n1=%d, n2=%d",n1,n2);
 	swap(&n1,&n2);
 	printf("\n after swapping: n1=%d, n2=%d\n\n",n1,n2);
 	return 0;
}

void swap(int *p, int *q)
{
 	int tmp;
 	tmp= *p;
 	*p=*q;
 	*q=tmp;
}
