#include<stdio.h>

int main()

{
    char str[] = {'h','e','l','l','o'};
    int length=0;
  
    //char str[] ="hello";
 
    /*char str[100];
    printf("Enter any string:");
    gets(str);
    printf("\n Your string is: ");
    puts(str);
    */
    
   
	while( str[length] != '\0')
    {
         ++length;
    }
    printf("The length of the string is %d", length);
    return 0;

}