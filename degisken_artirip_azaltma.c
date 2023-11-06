/*
değişken++ = sondan değişkeni artırma
değişken-- = sondan değişkeni azaltma
++değişken = önce değişkeni artırır sonra işlem yap
--değişken = önce değişkeni azalt sonra işlem yap
*/

#include <stdio.h>

main(){

    int a = 10;
    int b = 7;
    int c;

    c = ++a + b++;

    printf("%d\n%d\n%d", a, b, c);
}