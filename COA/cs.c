// -------------------------------------- header files -----------------------
#include <stdio.h>
#define MAX 5

// -------------------------------------- global declarations -----------------------
int choice, array[MAX], i;

// -------------------------------------- function declarations -----------------------
void list(void)
{
    printf("1. Circular right shift \n");
    printf("2. Circular left shift \n");
    printf("3.Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
}

void arr(void)
{
    int rotation;
    // printf("Enter the MAX of array: ");
    // scanf("%d",  MAX);
    // printf("\n");
    // int array MAX];
    printf("Enter the elements of array: \n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the number of rotations: ");
    scanf("%d", &rotation);
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
    printf("crs \n");
}

void CLS(void)
{
    printf("\n cls \n");
    for (i = 0; i < MAX; i++)
    {
        int j, temp;
        temp = array[MAX - 1];
        for (j = MAX - 1; j > 0; j--)
        {
            array[j] = array[j - 1];
        }
        array[0] = temp;
    }
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
            printf("Array before performing shitf: \n");
            Display();
            CRS();
            printf("Array after performing shitf: \n");
            Display();
            break;
        case 2:
            arr();
            printf("Array before performing shitf: \n");
            Display();
            CLS();
            printf("Array after performing shitf: \n");
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