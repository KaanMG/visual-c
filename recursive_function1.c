#include <stdio.h>

int mod(int x)
{
    if((x%10) == x){
        return x;
    }
    return (x % 10) + mod(x/10);
}
int main()
{
    int number;
    printf("Enter a number = ");
    scanf("%d",&number);
    printf("Sum of the digits of the number you entered = %d",mod(number));

    return 0;
}
