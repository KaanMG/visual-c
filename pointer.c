#include <stdio.h>

int main()
{
    /* *** %p -> pointer *** */

    int a = 15;
    int *pt;

    pt = &a;

    printf("%d", *pt);    // The value at the address
    printf("\n%p\n", pt); // The address in RAM memory
    printf("%p", &pt);    // The address of the pointer in Ram memory

    *pt = 25;

    printf("%d\n", a);
    printf("%p", pt);

    printf("\n\n%p",&a); // The address in RAM memory

    return 0;
}