#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matrixConstructor(int *matrix, int *row, int *column)
{
    srand(time(NULL));

    for(int i = 0; i < *row; i++)
    {
        for(int j = 0; j < *column; j++)
        {
            matrix[i][j] = rand() % 2;
        }
    }
}
int rowColumn(int *row, int *column)
{
    int temp;
    printf("Please enter the number for the matrix you want to create =");
    scanf("%d", &temp);
    *row = temp;
    *column = temp;
}
void contestantCountF(int *contestantCount)
{
    int temp;
    printf("Please, Enter how many people there are = ");
    scanf("%d",&temp);
    *contestantCount = temp;
}
void enteringName(char (*contestantNames)[100], int *contestantCount)
{   
    for(int i = 0; i < *contestantCount; i++)
    {
        printf("Enter your name = ");
        scanf("%s",&contestantNames[i]);
    }
}
void rightToCompeteF(int *rightToCompete,int *contestantCount)
{
    srand(time(NULL));

    for(int i = 0; i < *contestantCount; i++)
    {
        rightToCompete[i] = rand() % 5 + 1;
    }
}

main()
{
    int  contestantCount = 0, row = 0, column = 0;
    
    contestantCountF(&contestantCount);
    
    int point[contestantCount], rightToCompete[contestantCount];
    char contestantNames[contestantCount][100];

    enteringName(contestantNames, &contestantCount);

    rowColumn(&row, &column);
    
    int matrix[row][column];

    rightToCompeteF(rightToCompete, &contestantCount);

    matrixConstructor((int *)matrix, &row, &column);
    


}