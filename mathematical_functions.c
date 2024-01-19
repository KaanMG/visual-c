#include <stdio.h>
#include <math.h>
int main()
{
    double a = 23.56, d;
    int b = -15, c;

    /* fabs() absolute value*/

    b = fabs(b);
    printf("%d\n", b);

    /* fmod(x,y) taking the modulus*/

    c = fmod(23, 3);
    printf("%d\n", c);

    /* ceil() rounding up the decimal number to the nearest integer*/

    c = ceil(23.3);
    printf("%d\n", c);

    /* floor() rounding down the decimal number to the nearest integer*/

    c = floor(23.3);
    printf("%d\n", c);

    /* round() rounding the decimal number to the nearest integer*/

    c = round(23.6);
    printf("%d\n", c);

    /* cos() sin() cot() tan() acos() asin() The values should be entered in radians.*/

    c = cos(0);
    printf("%d\n",c);

    /*fmax() fmin() finds the largest and smallest of the entered numbers*/

    c = fmax(36,25);
    printf("%d\t",c);
    c = fmin(36,25);
    printf("%d\n",c);

    /*pow(base,exponent) calculates exponents*/

    c = pow(2,5);
    printf("%d\n",c);

    /*sqrt(x) taking square root*/

    c = sqrt(16);
    printf("%d\n",c);
}