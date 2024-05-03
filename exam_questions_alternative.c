#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matrixConstructor(int matrix[][100], int row, int column)
{
    srand(time(NULL));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            matrix[i][j] = rand() % 2;
        }
    }
}

void rowColumn(int *row, int *column)
{
    printf("Please enter the number for the matrix you want to create: ");
    scanf("%d", row);
    *column = *row;
}

void contestantCountF(int *contestantCount)
{
    printf("Please enter how many people there are: ");
    scanf("%d", contestantCount);
}

void enteringName(char contestantNames[][100], int contestantCount)
{
    for (int i = 0; i < contestantCount; i++)
    {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", contestantNames[i]);
    }
}

void rightToCompeteF(int rightToCompete[], int contestantCount)
{
    srand(time(NULL));

    for (int i = 0; i < contestantCount; i++)
    {
        rightToCompete[i] = rand() % 5 + 1;
    }
}

int main()
{
    int contestantCount = 0, row = 0, column = 0;

    contestantCountF(&contestantCount);

    int point[contestantCount], rightToCompete[contestantCount];
    char contestantNames[contestantCount][100];

    enteringName(contestantNames, contestantCount);

    rowColumn(&row, &column);

    int matrix[row][column];

    matrixConstructor(matrix, row, column);

    for(int i = 0; i < row; i++)
    {
        printf("\n");
        for(int j = 0; j < column; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
    }


    return 0;
}