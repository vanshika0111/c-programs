#include<stdio.h>

int main()

{ 
   
    int a,b,c;

    printf("enter three numbers:");

    scanf("%d %d %d",&a,&b,&c);

    if(a>b)

        (a>c)? printf("%d is max",a) : printf("%d is max",c);

    else

        (b>c)? printf("%d is amx",b) : printf("%d is max",c);

    return 0;

}