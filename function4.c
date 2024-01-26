#include <stdio.h>
#define PI 3.14

double alan(int sayi1)
{
    double daireAlani;
    
    daireAlani = PI * sayi1 * sayi1;

    return daireAlani;
}

double cevre(int sayi1)
{
    double daireCevresi;

    daireCevresi = 2 * PI * sayi1;

    return daireCevresi;
}

int main()
{
    double yariCap, daireAlani, daireCevresi;

    printf("Dairenin yaricapini giriniz = ");
    scanf("%lf",&yariCap);

    daireAlani = (double)alan(yariCap);
    daireCevresi = (double) cevre(yariCap);
    
    printf("Dairenin alani = %lf\nDairenin cevresi = %lf",daireAlani,daireCevresi);

}
