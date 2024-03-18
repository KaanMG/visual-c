#include <stdio.h>

int main()
{
    
    char name[] = {"Ali"};
    /*
    char *pt;
    pt = name;
    
    printf("%c", pt[1]);
    printf("%c", *(pt + 1));
    
    printf("%c\t", *pt);
    pt++;
    printf("%c\t", *pt);
    pt++;
    printf("%c\t", *pt);
    */

   
   char *p = name;

    p[0] = 'E';

    printf("%s",p);
    
}