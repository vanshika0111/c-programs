#include <stdio.h>
void decrypt(char *c)
{
    char *ptr = c;
    while(*ptr != '\0')
    {
         *ptr = *ptr-1;
        //if b is the code then a is its decode  ptr++;
        
    }
}


int main()
{
   char str[]= "Wbotijlb";
   decrypt(str);
   printf("The decrypted string is %s",str);
   return 0;
}
