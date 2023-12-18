#include <stdio.h>
#include <string.h>

main()
{
    int i, j;
    char ad[] = "Bilisim";
    for (i = 0; i < strlen(ad); i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%c",ad[j]);
        }
        printf("\n");
    }
    
    
    for (i = 0; i < 10; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}