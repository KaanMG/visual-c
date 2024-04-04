#include <stdio.h>
#include <math.h>

int main()
{
    int startValue, endValue, n;
    float total = 0.0;

    printf("Enter the start value = ");
    scanf("%d", &startValue);

    printf("Enter the end value = ");
    scanf("%d", &endValue);

    printf("Enter the value of n = ");
    scanf("%d", &n);

    for(int a = startValue; a <= endValue; a++)
    {
        total += (float)pow((sqrt(pow(startValue,2.0) + endValue)), (n+1));
    }

    printf("Result of the operation = %f",total);
}