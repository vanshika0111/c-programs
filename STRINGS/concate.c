#include<stdio.h>
int main()

{
    char s1[]="Programming", s2[]=" is awesome!";
    int length=0,j;
    while(s1[length]!='\0')
    {
         ++length;
    }
    
	for(j=0; s2[j]!='\0'; j++, ++length)
    {
         s1[length] = s2[j];
    }
    s1[length]= '\0';
    
	printf("\n After concatenation: ");
    puts(s1);
    
	return 0;


}