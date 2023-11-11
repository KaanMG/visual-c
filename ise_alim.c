#include <stdio.h>

main()
{
    int yas;
    char surucuBelgesi, mezuniyet, surucuBelgesiTipi[50], cevap, cevap1;

    printf("Yasinizi giriniz = ");
    scanf("%d", &yas);

    if (yas <= 40)
    {
        printf("Universite mezunu musunuz ? (Y/N)");
        scanf(" %c", &mezuniyet);
        if (mezuniyet == 'Y')
        {
            printf("Surucu belgeniz var mi ? (Y/N)");
            scanf(" %c", &surucuBelgesi);
            if (surucuBelgesi == 'Y')
            {
                printf("Surucu belgenizin tipini giriniz = ");
                scanf("%s", surucuBelgesiTipi);
                if (surucuBelgesiTipi == "C1" || "C1E" || "C" || "CE")
                {
                    printf("Tebrikler sartlarimizi karsiliyorsunuz ise alindiniz");
                }
                else if (surucuBelgesiTipi == "A" || "A2")
                {
                    printf("Basvuru sartlarimizi saglamiyorsunuz ama Motokurye sartlarimizi sagliyorsunuz \nMotokurye olarak ise baslamak ister misiniz ? (Y/N)");
                    scanf(" %c", &cevap);
                    if (cevap == 'Y')
                    {
                        printf("Tebrikler Motokurye olarak ise alindiniz");
                    }
                    else
                    {
                        printf("Iyi günler dileriz");
                    }
                }
                else if (surucuBelgesiTipi == "D")
                {
                    printf("Basvuru sartlarimizi saglamiyorsunuz ama Servis Soforlugu sartlarimizi sagliyorsunuz \nServis Soforu olarak ise baslamak ister misiniz ? (Y/N)");
                    scanf(" %c", &cevap1);
                    if (cevap1 == 'Y')
                    {
                        printf("Tebrikler Servis Soforu olarak ise alindiniz");
                    }
                    else
                    {
                        printf("Iyi gunler dileriz");
                    }
                }
                else
                {
                    printf("Iyi gunler dileriz");
                }
            }

            else
            {
                printf("Uzgunuz sartlarimizi karsilamiyorsunuz \nIyi gunler dileriz");
            }
        }

        else
        {
            printf("Uzgunuz sartlarimizi karsilamiyorsunuz \nIyi gunler dileriz");
        }
    }
    else
    {
        printf("Uzgunuz sartlarimizi karsilamiyorsunuz \nIyi gunler dileriz");
    }
}