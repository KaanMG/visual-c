#include <stdio.h>

main(){

/*
    switch (degisken){
        case d1; islemler; break;
        case d2; islemler; break;
        case d3; islemler; break;
        default; sartlar saglanmazsa calisacak kod blogu
    }

*/
    int sayi1, sayi2, islem;
    
    printf("Birinci sayiyi giriniz = ");
    scanf("%d",&sayi1);
    printf("Ikinci sayiyi giriniz = ");
    scanf("%d",&sayi2);
    printf("\n\n");
    printf("*****Islem Seciniz*****\n");
    printf("1. Toplama\n");
    printf("2. Cikarma\n");
    printf("3. Carpma\n");
    printf("4. Bolme\n");
    scanf("%d",&islem);

    switch (islem){
        case 1:{
            printf("%d + %d = %d",sayi1,sayi2,sayi1 + sayi2);
            break;
        }
        case 2:{
            printf("%d - %d = %d \n%d - %d = %d",sayi1,sayi2, sayi1 - sayi2,sayi2,sayi1, sayi2 - sayi1);
            break;
        }
        case 3:{
            printf("%d * %d = %d",sayi1,sayi2,sayi1 * sayi2);
            break;
        }
        case 4:{
            printf("%d / %d = %f \n%d / %d = %f",sayi1,sayi2, (float)sayi1 / sayi2,sayi2,sayi1, (float)sayi2 / sayi1);
            break;
        }
        default: {
            printf("Hatali islem sectiniz!");
        }
    }

    return 0;
}