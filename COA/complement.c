// -------------------------------------- header files -----------------------
#include <stdio.h>
#include <string.h>
#define MAX 10

// -------------------------------------- global declarations -----------------------
int choice;

// -------------------------------------- function declarations -----------------------
void list(void)
{
    printf("1. 1's complement \n");
    printf("2. 2's complement \n");
    printf("3.Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
}

void one(void)
{
    int i, size;
    char binary[MAX], one[MAX];
    printf("Enter the binary number: ");
    scanf("%s", &binary);
    size = strlen(binary);

    for (i = 0; i < size; i++)
    {
        if (binary[i] == '1')
        {
            one[i] = '0';
        }
        else
        {
            one[i] = '1';
        }
    }

    one[size] = '\0';
    printf(" 1's complement of the number is: %s \n", one);
}

void two(void)
{
    int i, size, carry = 1;
    char binary[MAX], one[MAX], two[MAX];
    printf("Enter the binary number: ");
    scanf("%s", &binary);
    size = strlen(binary);

    for (i = 0; i < size; i++)
    {
        if (binary[i] == '1')
        {
            one[i] = '0';
        }
        else
        {
            one[i] = '1';
        }
    }
    one[size] = '\0';
    printf(" 1's complement of the number is: %s \n", one);
    for (i = size - 1; i >= 0; i--)
    {
        if (one[i] == '1' && carry == 1)
        {
            two[i] = '0';
        }
        else if (one[i] == '0' && carry == 1)
        {
            two[i] = '1';
            carry = 0;
        }
        else
        {
            two[i] = one[i];
        }
    }
    two[size] = '\0';
    printf("2's complement of th number: %s \n", two);
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
            one();
            break;
        case 2:
            two();
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