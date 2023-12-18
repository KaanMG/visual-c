#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    int rastgeleSayi, tahmin, tahminSayisi = 0;
    srand(time(NULL));
    rastgeleSayi = rand() % 100 + 1;
    printf("%d",rastgeleSayi);

    while (1)
    {
        tahminSayisi++;

        printf("Tahmininizi giriniz\n");
        scanf("%d",&tahmin);

        if(tahmin > rastgeleSayi){
            printf("Sayinizi kucultun\n");
        }
        else if(tahmin < rastgeleSayi){
            printf("Sayinizi yukseltiniz\n");
        }
        else{
            printf("Tebrikler tahmininiz dogru\n%d.tahminde bildiniz",tahminSayisi);
            break;
        }
        

    }
    
}