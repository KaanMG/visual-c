#include <stdio.h>

int main()
{
    int islemeDevamEt = 1, cevap2, istenilenMiktar, hesap = 20000, mod50, mod20, odenebilirMiktar = 0;

    while (islemeDevamEt == 1)
    {
        printf("Cekmek istediginiz miktari giriniz\n");
        scanf("%d", &istenilenMiktar);

        if (istenilenMiktar < 0)
        {
            printf("Gecerli bir miktar giriniz\n");
            continue;
        }

        mod50 = hesap % 50;
        mod20 = hesap % 20;
        if (mod50 < mod20)
        {
            odenebilirMiktar = hesap - mod50;
        } 
        else 
        {
            odenebilirMiktar = hesap - mod20;
        }
        
        
        if (istenilenMiktar > hesap)
        {
            printf("Hesabinizda girdiginiz miktar kadar para bulunmamaktadir\n%d TL cekebilirsiniz onayliyorsaniz 1'i onaylamiyorsaniz 0'i tuslayiniz\n", odenebilirMiktar);
            scanf("%d", &cevap2);
            if (cevap2 == 1)
            {
                istenilenMiktar = odenebilirMiktar;
            }
            else
                continue;
        }

        if (istenilenMiktar % 20 == 0 || istenilenMiktar % 50 == 0)
        {
            hesap -= istenilenMiktar;
            printf("Hesabinizda kalan tutar = %d\n", hesap);
        }
        else
        {
            printf("Girdiginiz miktari veremiyoruz tekrar miktar girmek istiyorsaniz 1'i istemiyorsaniz 0'i tuslayiniz\n");
            scanf("%d", &islemeDevamEt);
            if (islemeDevamEt == 1)
                continue;
            else
                break;
        }
        if (hesap == 0)
        {
            printf("Hesapinizda para kalmamistir artik islem yapamazsiniz");
            break;
        }

        printf("Tekrar islem yapmak istiyor musunuz?\nIstiyorsaniz 1'i istemiyorsaniz 0'i tuslayiniz\n");
        scanf("%d",&islemeDevamEt);
        if (islemeDevamEt == 1)
            continue;
    }

    return 0;
}