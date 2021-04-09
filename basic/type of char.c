#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if((ch>='0')&&(ch<='9'))
     printf("the character %c is digit",ch);
    else if((ch>='a')&&(ch<='z'))
     printf("the character %c is lowercase",ch);
    else if((ch>='A')&&(ch<='Z'))
     printf("the character %c is uppercase",ch);
    else
     printf("the character %c is special character",ch);
    return 0;
}