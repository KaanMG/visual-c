#include <stdio.h>

int main()
{
    int number[] = {15,26,35,63,72};
    int number2[5], i;

    // The "memcpy" command shows the space occupied by the array in bytes.

    memcpy(number2, number, sizeof(number));

    for(i = 0; i < 5; i++)
    {
        printf("%d=> %d\t\t", (i+1), number2[i]);
    }
}