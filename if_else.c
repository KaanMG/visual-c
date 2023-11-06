#include <stdio.h>

main(){

    int sayi;
    
    printf("Bir sayi girinizn = ");
    scanf("%d", &sayi);

    if(sayi > 0){
        printf("Sayiniz pozitif");
    }

    else if(sayi == 0){
        printf("Sayiniz sifir");
    }

    else{
        printf("Sayiniz negatif");
    }

    return 0;
        
}