#include <stdio.h>

int main()
{
    int temp, number, size, i, j;

    printf("How many numbers will you enter\n");
    scanf("%d", &size);

    int iArray[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter of the number = ");
        scanf("%d", &number);
        iArray[i] = number;
    }
    
    for (i = 0; i < size; i++)
    {
        printf("%d\t", iArray[i]);
    }
    printf("\n");
    
    for(j = 1; j <= size; j++)
    {
        for (i = 0; i < (size - 1); i++)
        {
            if (iArray[i] > iArray[(i + 1)])
            {
                temp = iArray[i];
                iArray[i] = iArray[(i + 1)];
                iArray[(i + 1)] = temp;
            }
        }
        
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", iArray[i]);
    }
}