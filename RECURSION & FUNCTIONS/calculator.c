#include<stdio.h>
int mul(int x,int y);
int div(int x, int y);
int sub(int x,int y);
int add(int x,int y);
int main()
{
 	int x,y;
 	clrscr();
 	printf("\nCALCULATOR\n\n");

 	printf("MULTIPLICATION\n");
 	printf("\n enter two numbers:");
 	scanf("%d %d",&x,&y);
 	printf("\n %d",mul(x,y));

 	printf("\nDIVISION\n");
 	printf("\n enter two numbers:");
 	scanf("%d %d",&x,&y);
 	printf("\n %d",div(x,y));

 	printf("\nSUBTRACTION\n");
 	printf("\n enter two numbers:");
 	scanf("%d %d",&x,&y);
 	printf("\n %d",sub(x,y));

 	printf("\n ADDITION\n");
 	printf("\n Enter teo numbers:");
 	scanf("%d %d",&x,&y);
 	printf("\n %d",add(x,y));

 	return 0;
}

int mul(int x, int y)
{
 	int multiply;
 	multiply=x*y;
 	return(multiply);
}

int div(int x,int y)
{
 	int division;
 	division=x/y;
 	return(division);
}

int sub(int x,int y)
{
 	int subtraction;
 	subtraction=x-y;
 	return(subtraction);
}

int add(int x,int y)
{
 	int addition;
 	addition=x+y;
 	return(addition);
}