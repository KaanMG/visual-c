#include <stdio.h>

main()
{
    int sayi, adet, asalKontrol, i, j;
    
    printf("Kac adet sayi gireceksiniz = ");
    scanf("%d",&adet);
    
    for(j = 1;j <= adet;j++)
    {
        printf("Bir sayi giriniz = ");
        scanf("%d",&sayi);
        for(i = 2; i <= sayi / 2;i++)
    {
        if(sayi % i == 0)
        {
            asalKontrol = 1;
            printf("Sayiniz asal degildir\n\n");
            break;
        }
    }
    if (asalKontrol == 0)
    {
        printf("Sayiniz asaldir\n\n");
    }
    }
}