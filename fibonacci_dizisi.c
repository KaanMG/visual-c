#include <stdio.h>

main()
{
    int a = 1, b = 1, c, i, sayi;

    printf("Kac basamakli bir fibonacci dizisi olusturmak istiyorsunuz?\n");
    scanf("%d",&sayi);

    printf("%d\t%d",a,b);

    for(i = 0; i <= sayi; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("\t%d",c);
    }
}