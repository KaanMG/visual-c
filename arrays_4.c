#include <stdio.h>

int main()
{
    int min, temp, i, j, k;
    int array[] = {23, 30, 87, 65, 62, 91, 15, 27, 66, 92};

    for(j = 0; j < 10; j++)
    {
        min = array[j];
        for(i = (j + 1); i < 10; i++)
        {
            if(min > array[i])
            {
                min = array[i];
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;

            }
        }
    }

    for(k = 0; k < 10; k++)
    {
        printf("%d\t",array[k]);
    }
}