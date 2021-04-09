#include <stdio.h>
#include <math.h>
int main()
{
   int x,y,ans;
   printf("enter base:");
   scanf("%d",&x);
   printf("\n enter power:");
   scanf("%d",&y);
   ans=pow(x,y);
   printf("x raised tp y is %d",ans);
   return 0;

}
