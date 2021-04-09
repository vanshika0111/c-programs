#include <stdio.h>
int main()
{
    int cm,m,km;
    printf("Enter distance in cm:");
    scanf("%d",&cm);
    m=cm/100;
    km=cm/1000;
    printf("\n Distance in cm is %d, in m is %d and in km is %d",cm,m,km);
    
    return 0;
}
