#include <stdio.h>

int main()
{
    int a[4][4][4][4][4];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            for(int k = 0; k < 4; k++)
            {
                for(int l = 0; l < 4; l++)
                {
                    for(int m = 0; m < 4; m++)
                    {
                        printf("%p",&a[i][j][k][l][m]);
                    }
                }
            }
        }
    }
}