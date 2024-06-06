#include <stdio.h>
#include <stdlib.h>

int main()
{
    char date[] = "1983Date";
    char date1[] = "1983.25Date";
    int date2;
    char *ptrText;
    
    /*
    date2 = atoi(date);
    date2 += 10;
    */

   date2 = strtod(date, &ptrText);

    printf("%s\n", ptrText);
    printf("%d\n",date2);
    printf("%f\n",atof(date1));

    return 0;
}