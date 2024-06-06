#include <stdio.h>

struct student
{
    int number;
    char name[20];
    char surname[30];
    double avarage;
};

int main()
{
    struct student st;
    printf("Enter your number = ");
    scanf("%d",&st.number);
    printf("Enter your name = ");
    scanf("%s",st.name);
    printf("Enter your surname = ");
    scanf("%s",st.surname);
    printf("Enter your avarage = ");
    scanf("%lf",&st.avarage);
    printf("Number = %d\nName = %s\nSurname = %s\nAvarage = %lf",st.number,st.name,st.surname,st.avarage);
}