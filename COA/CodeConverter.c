// ------------------- header files -----------------
#include <stdio.h>
#include <math.h>
#define MAX 10

// ------------------- global declarations -----------------
int array[MAX];
char b[MAX];
int temp = 0, j = 0, i = 0, lb, sum = 0, s = 1;

// ------------------- function declarations -----------------
void list(void)
{
    printf("1. Decimal to binary conversion \n");
    printf("2. Decimal to hexadecimal conversion \n");
    printf("3. Binary to decimal conversion \n");
    printf("4. Exit \n");
}

void DecToBin(void)
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("\n");
    for (i = 0; decimal > 0; i++)
    {
        array[i] = decimal % 2;
        decimal = decimal / 2;
    }
    printf("The binary conversion is ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", array[j]);
    }
}

void DecToHex(void)
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("\n");

    while (decimal != 0)
    {
        temp = decimal % 16;
        if (temp < 10)
        {
            b[i] = temp + 48;
            i++;
        }
        else
        {
            b[i] = temp + 55;
            i++;
        }
        decimal = decimal / 16;
    }
    printf("The hexadecimal conversion is ");
    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", b[j]);
    }
}

void BinToDec(void)
{
    int bit, binary;
    printf("Enter the bits of binary to be converted: ");
    scanf("%d", &bit);
    printf("Enter %d bits of binary number: ", bit, binary);
    scanf("%d", &binary);
    printf("\n");

    while (binary > 0)
    {
        lb = binary % 10;
        sum = sum + (lb * s);
        s = s * 2;
        binary = binary / 10;
    }
    printf("The decimal conversion is %d", sum);
}

// ------------------- main function -----------------
int main()
{
    int choice;
    do
    {
        printf("\n");
        list();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            DecToBin();
            break;
        case 2:
            DecToHex();
            break;
        case 3:
            BinToDec();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice! \n");
            break;
        }
    } while (choice != 4);

    return 0;
}