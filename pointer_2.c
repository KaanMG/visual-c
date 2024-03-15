#include <stdio.h>

int main()
{
    int numbers[10] = {57, 23, 86, 42, 75, 31, 68, 14, 59, 92};

    for (int i = 0; i < 10; i++)
    {
        printf("%p --> %d\n", &numbers[i], numbers[i]);
    }

    printf("\n\n");

    int *npt;
    npt = numbers;
    for(int i = 0; i<10; i++)
    {
        printf("%p -- > %d\n",&npt[i],*(npt + i)); // *(npt += 1) = *(npt + i) = npt[i]
    }
    

    return 0;
}