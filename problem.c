#include <stdio.h>

int main()
{
    int j = 3;
    for(int i = 1;i+j<=10;i=1-j+i)
    {
        j = j++ - 2;
        printf("%d-%d\n",(i++)-j>3,(i-j*2));
    }
    return 0;
}