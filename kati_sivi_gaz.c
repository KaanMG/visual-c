#include <stdio.h>

main(){
    int sicaklik;

    printf("Bir sicaklik degeri giriniz = ");
    scanf("%d",&sicaklik);

    if (sicaklik <= 0){
        printf("Kati");
    }
    else if (0 < sicaklik <= 100){
        printf("Sivi");
    }
    else{
        printf("Gaz");
    }

    return 0;
}