#include <stdio.h>

int main()
{
    int array[2][3][5];
    int layer, row, column, total = 0, number;
    for (layer = 0; layer < 2; layer++)
    {
        for (row = 0; row < 3; row++)
        {
            for (column = 0; column < 5; column++)
            {
                for (int layer = 1; layer <= 50; layer++)
                {
                    printf("Enter the data in the %d. row and %d. column of the %d. layer ", row + 1, column + 1, layer + 1 );
                    scanf("%d", &number);
                    if (number >= 0)
                    {
                        array[layer][row][column] = number;
                        total += array[layer][row][column];
                        break;
                    }
                    else{
                        continue;
                    }
                }
            }
        }
    }

    return 0;

}