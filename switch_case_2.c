#include <stdio.h>

main(){

    int puan;

    printf("Puaninizi giriniz = ");
    scanf("%d",&puan);

    switch (puan){
        case 90 ... 100:{
            printf("AA");
            break;
        }
        case 80 ... 89:{
            printf("BA");
            break;
        }
        case 70 ... 79:{
            printf("BB");
            break;
        }
        case 60 ... 69:{
            printf("CB");
            break;
        }
        default : {
            printf("Gecersiz bir not girdiniz!");
        }
        
    }
}
