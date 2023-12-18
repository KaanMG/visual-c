#include <stdio.h>

main()
{
    int sayi, girilenSayi, i, tekToplam = 0, ciftToplam = 0;

    printf("Kac tane sayi gireceksiniz\n");
    scanf("%d",&girilenSayi);

    for(i = 1;i <= girilenSayi;i++)
    {
        printf("%d.Sayiyi giriniz\n",i);
        scanf("%d",&sayi);

        if(sayi % 2 == 0)
        {
            ciftToplam += sayi;
        }
        else
        {
            tekToplam += sayi;
        }
    }
    printf("Girdiginiz tek sayilarin toplami = %d\nGirdiginiz cift sayilarin toplami = %d",tekToplam,ciftToplam);
}