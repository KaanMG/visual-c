#include <stdio.h>
#include <math.h>
#define PI 3.14

main(){
    
    double r, alan, cevre, kenar1, kenar2, kenar3, ucgenAlani, yukseklik;

    printf("Ucgenin kenarlarini giriniz ve 2.Kenarin yuksekligini giriniz \n");
    scanf("%lf%lf%lf%lf", &kenar1, &kenar2, &kenar3, &yukseklik);
    printf("Kenar - 1 = %lf \nKenar - 2 = %lf \nKenar - 3 = %lf\n", kenar1, kenar2, kenar3);

    ucgenAlani = kenar2 * yukseklik;
    
    r = (double) (kenar1 * kenar2 * kenar3) / (2 * ucgenAlani);

    alan = PI * r * r;

    cevre = 2 * PI * r;

    printf("Cevresel cemberin alani = %lf \nCevresel cemberin cevresi = %lf \nCevresel cemberin yaricapi %lf", alan, cevre, r);
}