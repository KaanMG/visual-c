#include <stdio.h>

main(){
    double vize, final, ortalama;
    char ders[50];

    printf("Dersinizin adini giriniz = ");
    scanf("%s",&ders);
    printf("Vize notunuzu giriniz = ");
    scanf("%lf",&vize);
    printf("Final notunuzu giriniz = ");
    scanf("%lf",&final);

     

    if(vize >= 0 || vize <= 100 || 100 >= final || final >= 0){
        
        ortalama = (vize * 40/100 + final * 60/100);
        printf("Ortalamaniz = %lf\n",ortalama);

        if(vize >= 50 && final >= 60 && ortalama >= 60){
            if(60 >= vize >= 50 || 60 >= final >= 50){
            printf("Tebrikler %s dersinden gectiniz ancak şartli gectiniz", ders);
            }
            else{
                printf("Tebrikler %s dersinden gectiniz.", ders);
            }
        }
    
        else{
            printf("Uzgunuz %s dersinden kaldiniz.",ders);
        }
    }
    else{
        printf("Lutfen geçerli bir not giriniz!");
    }
    

}