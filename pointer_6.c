#include <stdio.h>

void update(int **pptr)
{
    **pptr = 20;
}

int main()
{
    int a = 15;
    int *ptr;
    ptr= &a;

    printf("a = %d\n", a);
    update(&ptr);//If the address of a pointer's value is passed to a function, the value received in the function should be indicated with **
    printf("a = %d\n", a);
}