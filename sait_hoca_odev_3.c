#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int addition(int (*randomNumberArray)[6], int rows, int columns)
{
    int total = 0;

    for (int x = (rows - 1); x <= (rows + 1); x++)
    {
        for (int y = (columns - 1); y <= (columns + 1); y++)
        {
            total += randomNumberArray[x][y];
        }
    }
    total -= randomNumberArray[rows][columns];

    return total;
}

void sorting(int *sum, char (*nameList)[50])
{
    int bigNumberIndex = 0;

    for(int d = 0; d < 2; d++)
    {
        printf("%s : %d", nameList[d], sum[d]);
        if(sum[d + 1] > sum[d]){
            bigNumberIndex = d + 1;
        }
    }
    printf("%s : %d", nameList[2], sum[2]);
    printf("%s : %d", nameList[bigNumberIndex], sum[bigNumberIndex]);
}

int main()
{
    int randomNumberArray[8][6], row, column, sum[3];
    char nameList[3][50];

    srand(time(NULL));

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            randomNumberArray[i][j] = rand() % 201 - 100;
        }
    }

    for (int k = 0; k < 8; k++)
    {
        for (int l = 0; l < 6; l++)
        {
            printf("%d\t", randomNumberArray[k][l]);
        }
        printf("\n");
    }

    for (int a = 0; a < 3; a++)
    {
        printf("Enter your name = ");
        scanf("%s", &nameList[a]);

        printf("Select a row =");
        scanf("%d", &row);

        printf("Select a column = ");
        scanf("%d", &column);

        sum[a] = addition(randomNumberArray, row, column);
       
    }
    sorting(sum, nameList);


    return 0;
}