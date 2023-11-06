#include <stdio.h>

/*
1.Şart      2.Şart      AND(&&)     OR(||)      NOT(!)
True        True        True        True        True => False
True        False       False       True        False => True
False       True        False       True        
False       False       False       False     
*/

main(){

    int a = 10;
    int b = 50;
    int c = 85;

    printf("%d", a < b || c < b);

}