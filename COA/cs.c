// -------------------------------------- header files -----------------------
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

// -------------------------------------- global declarations -----------------------
int choice, array[MAX], i;

// -------------------------------------- function declarations -----------------------
void list(void)
{
    printf("1. Circular right shift \n");
    printf("2. Circular left shift \n");
    printf("3. Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
}

void arr(void)
{
    printf("Enter the elements of array: \n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &array[i]);
    }
}

void Display(void)
{
    printf("\n [");
    for (i = 0; i < MAX; i++)
    {
        printf(" %d ", array[i]);
    }
    printf("] \n");
}

void CRS(void)
{
    // printf("\n circular right shift: 12345 --> 51234 \n");
    int temp = array[MAX - 1];
    for (int i = MAX - 1; i >= 0; i--)
    {
        if (i == 0)
        {
            break;
        }
        array[i] = array[i - 1];
    }
    array[0] = temp;
}

void CLS(void)
{
    // printf("\n circular left shift: 12345 --> 23451 \n");
    int temp = array[0];
    for (int i = 0; i < MAX - 1; i++)
    {
        if (i == MAX - 1)
        {
            break;
        }
        array[i] = array[i + 1];
    }
    array[MAX - 1] = temp;
}

// -------------------------------------- main function -----------------------
int main()
{
    do
    {
        printf("\n");
        list();
        printf("\n");
        switch (choice)
        {
        case 1:
            arr();
            printf("Array before performing shift: \n");
            Display();
            CRS();
            printf("Array after performing shift: \n");
            Display();
            break;
        case 2:
            arr();
            printf("Array before performing shift: \n");
            Display();
            CLS();
            printf("Array after performing shift: \n");
            Display();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid choice! \n");
            break;
        }
    } while (choice != 3);
    return 0;
}