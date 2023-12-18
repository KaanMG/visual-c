#include <stdio.h>

main()
{
    int sayi, toplam = 0;
    
    printf("Bir sayi giriniz = ");
    scanf("%d",&sayi);

    while(sayi != 0)
    {
        toplam += sayi;
        printf("Bir sayi giriniz = ");
        scanf("%d",&sayi);
    }
    printf("Girdiginiz sayilarin toplami = %d",toplam);
}