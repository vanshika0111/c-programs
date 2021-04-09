#include <stdio.h>
int main()
{
    int i=344;
    int *ptr;
    int **ptr_to_ptr;
    
    ptr=&i;
    ptr_to_ptr=&ptr;
    
    printf("\n the value of i is %d", **ptr_to_ptr);
    return 0;

}
