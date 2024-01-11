#include <stdio.h>

int main() {
    int balance = 20000, isYes = 1, requested_amount = 0;

    while(isYes == 1) {
        printf("\nLütfen istediğiniz miktari giriniz: ");
        scanf("%d",&requested_amount);

        if (requested_amount <= balance)
        {
            if (requested_amount % 20 == 0 || requested_amount % 50 == 0)
            {
                balance -= requested_amount;
                printf("\nÖdeme gerçekleşti. Şu an kalan bakiye: %d", balance);
                printf("\nDevam etmek istermisiniz Evet için 1/Hayir için 0 tuşuna basiniz: ");
                scanf("%d", &isYes);
            } else {
                printf("\nLütfen banka için uygun değerleri giriniz %d TL ödememiz bulunmamaktadir.", (requested_amount % 10));
            }
            
        } else {
            int payable_amount = 0;
            int mod50 = balance % 50;
            int mod20 = balance % 20;
            if (mod50 < mod20)
            {
                payable_amount = balance - mod50;
            } else {
                payable_amount = balance - mod20;
            }
             
            printf("\nBu miktari veremiyoruz. Su anda size %d TL ödeyebiliriz. Onayliyor musunuz? Evet için 1/Hayir için 0 tuşuna basiniz: ", payable_amount);
            scanf("%d", &isYes);
            if (isYes == 1)
            {
                balance -= payable_amount;
                printf("\nÖdeme gerçekleşti. Şu an kalan bakiye: %d", balance);
                isYes = 0;
            }
            
        }
        
    }

    return 0;
}