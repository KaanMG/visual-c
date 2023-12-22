#include <stdio.h>

main()
{
    int bakiye = 20000, miktar, miktar2 = 0, cevap = 1,cevap2, cevap3, sayi_200 = 0, sayi_100 = 0, sayi_50 = 0, sayi_20 = 0;

    
    while(cevap == 1)
    {
        printf("Cekmek istediginiz miktari giriniz = ");
        scanf("%d",&miktar);
            
        if(miktar > bakiye)
        {
            printf("Hesabinizda bu kadar para bulunmamaktadir\nSu anda en fazla 20000 TL cekebilirsiniz onayliyor musunuz\n(Cevabizin Evet ise 1 Hayir ise 0'i tuslayiniz)\n");
            scanf("%d",&cevap2);
            
            if (cevap2 == 1)
            {
                miktar = 20000;
            }
            else
                continue;
        }
        
        while (cevap3 == 1)
        {
            while(miktar2 < miktar)
            {
                miktar2 += 200;
                sayi_200++;
                if(miktar2 == miktar)
                    break;
                else
                    continue;
            }
            if(miktar2 == miktar)
                break;
            miktar2 -=200;
            while(miktar2 < miktar)
            {
                miktar2 += 100;
                sayi_100++;
                if(miktar2 == miktar)
                    break;
                else
                    continue;
            }
            if(miktar2 == miktar)
                break;
            miktar2 -= 100;
            while(miktar2 < miktar)
            {
                miktar2 += 50;
                sayi_50++;
                if(miktar2 == miktar)
                    break;
                else
                    continue;
            }
            if(miktar2 == miktar)
                break;
            miktar2 -= 20;
            while(miktar2 < miktar)
            {
                miktar2 += 20;
                sayi_20++;
                if(miktar2 == miktar)
                    break;
                else
                    continue;
            }
            if(miktar2 == miktar)
                break;
            printf("Gecersiz bir miktar girdiniz\nYeniden miktar girmek istiyorsaniz 1 istemiyorsaniz 0'i tuslayiniz");
            scanf("%d",&cevap3);
            if (cevap3 == 1)
            {
                printf("Cekmek istediginiz miktari giriniz = ");
                scanf("%d",&miktar);
            }
            else
                break;
            
        }
        printf("Paraniz %d tane 200'luk %d tane 100'luk %d tane 50'lik %d tane 20'lik banknot ile verilecektir\nIyi gunler dileriz\n");
        
        
        
        printf("Isleme devam etmek istiyorsaniz 1 istemiyorsaniz 0'a basiniz\n");
        scanf("%d",&cevap);
    }
}