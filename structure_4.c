#include <stdio.h>

struct coordinate
{
    int x;
    int y;
};

int main()
{
    struct coordinate a;
    a.x = 0;
    a.y = 1;

    struct coordinate *ptr = &a;

    printf("x = %d\ty = %d",ptr->x, (*ptr).y);

}