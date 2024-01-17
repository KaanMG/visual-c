#include <stdio.h>

int enBuyuk();
int enKucuk();
int fark();

main()
{
    int a, b, c, farki;

    printf("Uc adet sayi giriniz = \n");
    scanf("%d%d%d", &a, &b, &c);

    farki = fark(enBuyuk(a, b, c), enKucuk(a, b, c));
    printf("%d", farki);
}

int enBuyuk(int sayi1, int sayi2, int sayi3)
{
    int enBuyuk;
    if ((sayi1 > sayi2) && (sayi1 > sayi3))
    {
        enBuyuk = sayi1;
    }
    else if ((sayi2 > sayi1) && (sayi2 > sayi3))
    {
        enBuyuk = sayi2;
    }
    else
        enBuyuk = sayi3;

    return enBuyuk;
}

int enKucuk(int sayi1, int sayi2, int sayi3)
{
    int enKucuk;
    if ((sayi1 < sayi2) && (sayi1 < sayi3))
    {
        enKucuk = sayi1;
    }
    else if ((sayi2 < sayi1) && (sayi2 < sayi3))
    {
        enKucuk = sayi2;
    }
    else
        enKucuk = sayi3;

    return enKucuk;
}

int fark(int sayi1, int sayi2)
{
    int fark;

    fark = sayi1 - sayi2;

    return fark;
}
