#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int addition(int randomNumbers[][], int rows, int columns)
{
    int total = 0;

    for (int x = (rows - 1); x <= (rows + 1); x++)
    {
        for (int y = (columns - 1); y <= (columns + 1); y++)
        {
            total += *randomNumbers[x][y];
        }
    }

    return total;
}

void sorting(int sum[], char nameList[])
{
    int intTemp;
    char *charTemp;

    for (int d = 0; d < 3; d++)
    {
        for (int e = 0; e < 2; e++)
        {
            if (*sum[e] < *sum[e + 1])
            {
                intTemp = *sum[e];
                *sum[e] = *sum[e + 1];
                *sum[e + 1] = intTemp;

                charTemp = *nameList[e];
                *nameList[e] = *nameList[e + 1];
                *nameList[e + 1] = charTemp;
            }
        }
    }

    for(int h = 0; h < 3; h++)
    {
        printf("%s = %d\n", *nameList[h], *sum[h]);
    }
}

int main()
{
    int randomNumbers[8][6], row, column, sum[3];
    char *nameList[3];

    srand(time(NULL));

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            randomNumbers[i][j] = rand() % 201 - 100;
        }
    }

    for (int k = 0; k < 8; k++)
    {
        for (int l = 0; l < 6; l++)
        {
            printf("%d\t", randomNumbers[k][l]);
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

        sum[a] = addition(randomNumbers, row, column);

        sorting(sum, nameList);
    }
}