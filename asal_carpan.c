#include <stdio.h>

main()
{
    int sayi, bolen = 2;
    
    printf("Asal carpanlarini bulmak istediginiz sayiyi giriniz = ");
    scanf("%d",&sayi);
    printf("%d",sayi);
    while(sayi >= bolen)
    {
        if(sayi % bolen == 0)
        {
            sayi /= bolen;
            printf("\t|\t%d\n%d",bolen,sayi);
        }
        else
            bolen++;

    }
    printf(" \t|");
}