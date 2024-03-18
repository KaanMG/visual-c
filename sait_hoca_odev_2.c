#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.14

void operationTable()
{
    printf("1 - Taking Square Root\n2 - Raising to the Power\n3 - Taking Absolute Value\n4 - Rounding Up to the Nearest Integer\n");
    printf("5 - Rounding Down to the Nearest Integer\n6 - Rounding to the Nearest Integer\n7 - Sin\t8 - Cos\n9 - Tan\t10 - Cot\n");
    printf("\nPlease choose from the operations above = ");
}

float chooseOperations(int number, float number1)
{
    int power;
    float radian;
    if (number == 1)
    {
        return sqrt(number1);
    }
    else if (number == 2)
    {
        printf("Which power of the number");
        scanf("%d", &power);
        return pow(number1, power);
    }
    else if (number == 3)
    {
        if (number1 >= 0)
        {
            printf("Your number is already a positive number");
        }
        else
        {
            return (float)fabs(number1);
        }
    }
    else if (number == 4)
    {
        return ceil(number1);
    }
    else if (number == 5)
    {
        return floor(number1);
    }
    else if (number == 6)
    {
        return round(number1);
    }
    else if (number == 7)
    {
        if(number1<0){
            radian = (number1 * -1 * PI) / 180.0;
            return sin(radian);
        }
        radian = (number1 * PI) / 180.0;
        return sin(radian);
    }
    else if (number == 8)
    {
        if(number1<0){
            radian = (number1 * -1 * PI) / 180.0;
            return sin(radian);
        }
        radian = (number1 * PI) / 180.0;
        return (float)cos(radian);
    }
    else if (number == 9)
    {
        if(number1<0){
            radian = (number1 * -1 * PI) / 180.0;
            return sin(radian);
        }
        radian = (number1 * PI) / 180.0;
        return (float)(sin(radian) / cos(radian));
    }
    else
    {
        if(number1<0){
            radian = (number1 * -1 * PI) / 180.0;
            return sin(radian);
        }
        radian = (number1 * PI) / 180.0;
        return (float)(cos(radian) / sin(radian));
    }
}

int main()
{
    int randomNumber, guessNumber = 0, choose, answer;
    float guess, value = 0;

    srand(time(NULL));
    randomNumber = rand() % 100 + 1;
    printf("%d\n", randomNumber);

    while (1)
    {
        guessNumber++;

        printf("Take a guess = ");
        scanf("%f", &guess);
        guess = round(guess);

        if (guess == randomNumber)
        {
            if (guessNumber % 2 == 0)
            {
                guess *= 1.724895;
                printf("\nYour new guess = %f\n", guess);
            }
            else
            {
                guess *= -1.724895;
                printf("\nYour new guess = %f\n", guess);
            }
            while (1)
            {
                operationTable();
                scanf("%d", &choose);
                value = chooseOperations(choose, guess);
                printf("%f", value);

                printf("\nDo you want to continue the process?(1/0)\n");
                scanf("%d", &answer);

                if (answer == 0)
                {
                    break;
                }
            }
            if (answer == 0)
            {
                break;
            }
        }
        else if (guess < randomNumber)
        {
            printf("Your guess is wrong, make a higher guess\n");
        }
        else
        {
            printf("Your guess is wrong, make a lower guess\n");
        }
    }

    return 0;
}