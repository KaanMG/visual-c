#include <stdio.h>

void change(int *a, int *b)
{
    int temp;

    temp = *a;

    *a = *b;
    *b = temp;
}

int main()
{
    int a = 5;
    int b = 7;

    printf("%d\t%d\n",a,b);

    change(&a,&b);

    printf("%d\t%d",a,b);

    return 0;
}