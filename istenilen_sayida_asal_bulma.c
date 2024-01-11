#include <stdio.h>

main()
{
    int sayi=2, adet, bulunanAsal=0, i, asalKontrol;
    
    printf("Kac tane asal sayi bulmak istiyorsunuz = ");
    scanf("%d",&adet);
    
    while(bulunanAsal < adet)
    {
        asalKontrol = 0;
        for(i = 2; i <= sayi / 2;i++)
        {
            if(sayi % i == 0)
            {
                asalKontrol = 1;
                break;
            }
        }
        if (asalKontrol == 0)
        {
            printf("%d\n",sayi);
            bulunanAsal++;
        }
        sayi++;
    }
}