/*
    malloc = The program allocates a certain memory space during runtime.
    calloc = The program allocates a certain memory space during runtime and initializes this space to zero.
    realloc = It is used to resize the memory allocated with malloc or calloc.
    free = It releases the allocated memory space.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    // p = malloc(10 * sizeof(int));

    p = calloc(10, sizeof(int));

    for (int j = 0; j < 10; j++)
    {
        p[j] = j + 1;
    }

    /*
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", p[i]);
    }
    */

    p = realloc(p, 10 * sizeof(int));
    
    for (int j = 10; j < 20; j++)
    {
        p[j] = j + 1;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", p[i]);
    }

    free(p);

    return 0;
}