#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char str[100];
	int a=0,d=0,s=0,i=0;

	printf("input string:\n");
	gets(str);

	while(str[i]!='\0')
	{
 	 if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]>='Z'))
  	 {
    	  a++;
  	 }	 
 	 else if(str[i]>='0' && str[i]<='9')
  	 {
    	  d++;
  	 }
     else
     {
          s++;
     }
     i++;
    }

	// space is counted as special character
	printf("alphabets = %d\n",a);
	printf("digits = %d\n",d);
	printf("special character = %d",s);

	return 0;
	}