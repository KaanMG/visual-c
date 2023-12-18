#include <stdio.h>

main()
{
    int i,sayi,carpim = 1;

    printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz\n");
    scanf("%d",&sayi);
    
    for(i = 1;i <= sayi;i++)
    {
        carpim *= i;
    }
    printf("%d",carpim);
}