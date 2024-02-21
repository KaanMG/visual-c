#include <stdio.h>

int main()
{
    int numbers[4][5] = {{57, 23, 86, 42, 75}, {39, 58, 74, 21, 86}, {79, 15, 38, 62, 47}, {45, 12, 68, 37, 54}};

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d\t",numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}