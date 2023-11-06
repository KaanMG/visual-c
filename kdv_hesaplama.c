#include <stdio.h>

main (){
    float fiyat, tutar, oran, kdv;
    printf("Urunun fiyatini giriniz = ");
    scanf("%f", &fiyat);
    printf("Urunun kdv oraini giriniz = ");
    scanf("%f", &oran);
    kdv = fiyat * oran / 100;
    tutar = fiyat + kdv;
    printf("Urunun kdv fiyati = %f\n Urunun tutari = %f", kdv, tutar);

    return 0;
}