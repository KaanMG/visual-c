#include <stdio.h>
#include "mathematics.h"

int main()
{
    int number1, number2, fresult;

    printf("Enter a number = ");
    scanf("%d",&number1);
    scanf("%d",&number2);
    fresult = factorial(number1);
    printf("%d\n",fresult);
    printf("%d\n",add(number1, number2));
    printf("%d\n",subtract(number1,number2));
}