#include <stdio.h>

int faktoriyel(int sayi)
{
    int i,fakt=1;
    for(i=1;i<=sayi;i++)
    {
        fakt *= i;
    }
    return fakt;
}
int toplam (int sayi1, int sayi2)
{
    int toplam;
    toplam = sayi1 + sayi2;

    return toplam;
}
int fark (int sayi1, int sayi2)
{
    int fark;
    fark = sayi1 - sayi2;

    return fark;
}
int bolum (int sayi1, int sayi2)
{
    int bolum;
    bolum = sayi1 / sayi2;

    return bolum;
}

main()
{
    double islem;

    islem = bolum((faktoriyel(5),faktoriyel(7)),fark(faktoriyel(9),faktoriyel(6)));
    printf("%lf",islem);
}