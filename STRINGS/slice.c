#include <stdio.h>
void slice(char *str, int m, int n)
{
    int i=0;
    while((m+i)<n)
    {
         str[i] = str[i+m];
         i++;
    }
    str[i] = '\0';
}



int main()
{
    char str[]= "Vanshika";
    slice(str, 1, 7);    // give these two numbers as per the string enteredprintf("%s",str);
    return 0;
}
