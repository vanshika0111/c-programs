#include<stdio.h>
int main()
{
	char str[100],ch;
	int i,count=0;

	printf("Enter string:\n");
	gets(str);
	printf("\n%s",str);
	printf("\nEnter character to check frequency:\n");
	scanf("%c",&ch);
	for(i=0;str[i]!='\0';i++)
	{
	  if(ch==str[i])
	  ++count;
	}
	printf("\nFrequency of %c is %d\n",ch,count);
	getch();
}