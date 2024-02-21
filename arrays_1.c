#include <stdio.h>

int sum(int number[],int size)
{
    int total = 0, i;

    for (i = 0; i < size; i++)
    {
        total += number[i]; 
    }
    return total;
}

int main()
{
    int size, number, i, total;

    printf("How many numbers will you enter\n");
    scanf("%d",&size);

    int numbers[size];

    for(i = 0; i < size; i++)
    {
        printf("Enter of the number = ");
        scanf("%d",&number);
        numbers[i] = number;
    }
    total = sum(numbers,size);
    printf("%d",total);

    return 0;
}



