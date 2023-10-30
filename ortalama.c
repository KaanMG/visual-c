#include <stdio.h>

main(){
    int sayi1, sayi2, sayi3;
    float ort;
    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);
    printf("Ucuncu sayiyi giriniz: ");
    scanf("%d", &sayi3);
    ort = (float)(sayi1 + sayi2 + sayi3) / 3;
    printf("Ortalamaniz: %f", ort);

    return 0;
}