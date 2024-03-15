#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    float number;
    
    srand(time(NULL));
    number = rand();
    /*
    printf("Enter the number = ");
    scanf("%f",&number);
    */
    /*
    if(number < 0)
    {
        number *= -1.0;
    }
    */

    printf("%f",round(sqrt(abs(number))));

    return 0;
}