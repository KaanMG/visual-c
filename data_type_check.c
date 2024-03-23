#include <stdio.h>
#include <stdlib.h>

void integerCheck(int *number)
{
    char *cp;
    char input[20];
    int temp;

    while (1)
    {

        scanf("%s", input);
        temp = strtol(input, &cp, 10);

        if (*cp != '\0' || input == "")
        {
            printf("You did not enter an integer data type\n");
            printf("Please enter an integer again = ");
            continue;
        }

        else
        {
            *number = temp;
            break;
        }

        printf("%d", number);
    }
}

int main()
{
    int number1, number2;

    printf("Please enter the first number = ");

    integerCheck(&number1);

    printf("Please enter the second number = ");

    integerCheck(&number2);
}