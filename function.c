/*
FONKSIYONLAR
-> Belli bir işlevi yerine getirmek üzer ana programdan bağımsız kod grupların fonksiyon denir.
-> Ana program tarafından çağırılarak tekrar tekrar kullanılmasına imkan sağlar.
-> Kod tekraını önleyerek hata tespitini kolaylaştırır.

Fonksiyonlar 4'e ayrılır
1- Parametre almayan
2- Parametre alan
3- Geriye değer döndürmeyen => void ...(){}
4- Geriye değer döndüren
*/

#include <stdio.h>

void message();
void topla(int sayi1,int sayi2)
{
    printf("%d + %d = %d\n",sayi1,sayi2,sayi1+sayi2);
}
void carpma(int sayi1, int sayi2)
{
    printf("%d x %d = %d\n",sayi1,sayi2,sayi1*sayi2);
}


main()
{
    int a=5,b=23,c=243,d=34;
    message();
    topla(a,b);
    topla(b,c);
    topla(c,d);
    carpma(a,d);
    carpma(b,d);
}
void message()
{
    printf("Function worked\n");
}