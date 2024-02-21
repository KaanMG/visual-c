#include <stdio.h>

/*
int factorial(int x)
{
    int fact=1,i;

    if((x == 0) || (x == 1))
    {
        return 1;
    }
    else
    {
        for(i = 1; i <= x; i++)
        {
            fact *= i;
        }
        return fact;
    }
}



int main()
{

    printf("%d\n%d\n%d",factorial(1),factorial(5),factorial(0));

    return 0;
}
*/



/*
int factorial(int x)
{
    if (x == 1)
    {
        return 1;
    }
    return x * factorial(x - 1);
}

void operations(int x)
{
    if(x == 1)
    {
        printf("1 = ");
        return;
    }
    printf("%d*",x);
    operations(x - 1);
}

int main()
{
    operations(5);
    printf("%d", factorial(5));

    return 0;
}
*/

int addition(int x)
{
    if(x == 1)
        return 1;
    return x + addition(x-1);
}
int operations(int x)
{
    if(x == 0){
        printf("0 = ");
        return;
    }
    printf("%d + ",x);
    operations(x - 1);
}
int main()
{
    int number;
    printf("Up to which number do you want to perform the addition operation?\n");
    scanf("%d",&number);
    operations(number);
    printf("%d",addition(number));
}