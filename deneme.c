#include <stdio.h>

int main()
{
    int array[2][3] = {{1,2,3},{4,5,6}};
    printf("%d",sizeof(array)/sizeof(int));
}