#include <stdio.h>
#include "calculate.h"
extern double area;
int main()
{
    int r;
    printf("Enter a number = ");
    scanf("%d",&r);

    areaCalculate(r);
    printf("%d",area);

    return 0;
}