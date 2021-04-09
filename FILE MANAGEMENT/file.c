#include<stdio.h>
void main()
{
    FILE *f;
    char c;
    f= fopen ("power.txt", "w");
    while( c = getchar() != EOF)
    {
        putc(c,f);
    }
    fclose(f);
}
