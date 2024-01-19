#include <stdio.h>
#include <math.h>

int factorial(int number)
{
    int i, factorial = 1;
    for (i = 1; i <= (number * 2); i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, k;
    double process = 0;
    printf("Enter of the value n = ");
    scanf("%d", &n);

    for (k = 1; k <= n; k++)
    {
        process += (double)(pow(5, k)) / (factorial(k));
    }
    printf("%lf", process);

    return 0;
}