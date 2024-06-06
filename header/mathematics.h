#include <math.h>

int factorial(int a)
{
    int fact = 1;
    for(int i = 1; i<=a; i++)
    {
        fact *= i;
    }
    return fact;
}

int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int subtract(int a, int b)
{
    int sub;
    sub = abs(a - b);
    return sub;
}