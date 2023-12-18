#include <stdio.h>

main()
{
    int sayi, bolen, carpanToplami = 0;
    printf("Bir sayi giriniz\n");
    scanf("%d",&sayi);

    for(bolen = 1; bolen <= (sayi / 2); bolen++ )
    {
        if(sayi % bolen == 0)
        {
            carpanToplami += bolen;
        }

    }
    printf("%d\n",carpanToplami);
    if (sayi == carpanToplami)
    {
        printf("Sayiniz mukemmel sayi\n");
    }
    else
    {
        printf("Sayiniz mukemmel sayi degil\n");
    }
    
    


}