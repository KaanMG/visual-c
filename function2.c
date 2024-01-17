#include <stdio.h>

int faktoriyel(int sayi)
{
    int i, fakt = 1;
    for (i = 1; i <= sayi; i++)
    {
        fakt *= i;
    }
    return fakt;
}

main()
{
    double islem;

    islem = (double)(faktoriyel(5) + faktoriyel(7)) / (faktoriyel(9) - faktoriyel(6));
    printf("%lf", islem);
}