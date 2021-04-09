#include <stdio.h>
int main()
{
   int x,y,z;
   printf("enter two angles:");
   scanf("%d %d",&x,&y);
   z=180-(x+y);
   printf("\n the third angle is %d",z);
   return 0;
}
