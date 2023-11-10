#include <stdio.h>

main(){
    int sayi,kalan;

    printf("Bir sayi giriniz = ");
    scanf("%d",&sayi);

    kalan = sayi % 2;

    if(kalan == 1){
        printf("Sayiniz tek sayi");
    }
    else{
        printf("Sayiniz cift sayi");
    }
}