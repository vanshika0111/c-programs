#include <stdio.h>
int main()
{
   int x=5,y=3;
   printf("before swapping: x = %d, y= %d",x,y);
   x=x+y;
   y=x-y;
   x=x-y;
   printf("\nafter swapping: x = %d, y= %d",x,y);
    return 0;
}