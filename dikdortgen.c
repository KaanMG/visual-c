#include <stdio.h>
#include <math.h>

main(){
    int a, b, alan, cevre, kosegen;

    printf("Dikdortgenin uzun kenarini giriniz: ");
    scanf("%d", &a);
    printf("Dikdortgenin kisa kenarini girinz: ");
    scanf("%d", &b);
    alan = a * b;
    cevre = 2*a + 2*b;
    kosegen = pow(a,2) + pow(b,2) / (float)(1/2);
    printf("Dikdortgenin alani: %d\n", alan);
    printf("Dikdortgenin cevresi: %d\n", cevre);
    printf("Dikdortgenin kosegeni: %d", kosegen);

}