#include <stdio.h>
#include <math.h>

main(){
    int a = 10;
    int b = 4;
    int islem1, islem2, islem3, islem5;
    float islem4, us, karekok;

    islem1 = a + b;
    islem2 = a - b;
    islem3 = a * b;
    islem4 = a / b;
    islem5 = a % b;
    us = pow(a,b);
    karekok = sqrt(16);

    printf("Toplama: %d\n",islem1);
    printf("Cikarma: %d\n",islem2);
    printf("Carpma: %d\n",islem3);
    printf("Bolme: %f\n",islem4);
    printf("Kalan: %d\n",islem5);
    printf("Uslu isleminiz: %f\n",us);
    printf("Karekokunuz: %f",karekok);
}