#include <stdio.h>

main(){
    int sayi1,sayi2,sayi3;

    printf("Lutfen 3 adet sayi giriniz = ");
    scanf("%d%d%d",&sayi1,&sayi2,&sayi3);

    if (sayi1 >= sayi2 && sayi1 >= sayi3){
        printf("En buyuk sayi = %d",sayi1);
    }
    else if (sayi2 >= sayi1 && sayi2 >= sayi3){
        printf("En buyuk sayi = %d",sayi2);
    }
    else{
        printf("En buyuk sayi = %d",sayi3);
    }

    return 0;
}