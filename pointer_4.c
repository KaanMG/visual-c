#include <stdio.h>

int sum(int *numbers,int size)
{
    int addition = 0;
    for(int i = 0; i < size; i++)
    {
        addition += *(numbers + i);
        printf("%d : %p\n",*(numbers+i), (numbers + i));
    }
    

    return addition;
}


int main()
{
    int numbers[] = {15,25,63,89,24};

    printf("%d : %p",sum(numbers,5));
}