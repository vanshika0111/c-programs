#include<stdio.h>
#include<math.h>
int func(int);
int main()
{
 	int n,sqr;
 
 	printf("Enter a number:\n");
 	scanf("%d",&n);
 	sqr=func(n);
 	printf("\n Square of %d is : %d",n,sqr);
 	getch();
}
 

int func(int temp)
 {
  return pow(temp,2);
 }

