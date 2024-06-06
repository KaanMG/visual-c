#include <stdio.h>

struct studentInformation
{
    char name[30];
    char surname[30];
    int number;
};

int main()
{
    FILE *recordInformation;
    struct studentInformation stdinfo;
    int newRegistrationResponse;

    recordInformation = fopen("C:\\Users\\hp\\Desktop\\C\\visual c\\filing\\student_registiration_system.txt","w");

    if(recordInformation == NULL){
        printf("Driver not foind");
    }

    else{
        while(1)
        {
            printf("Enter your name = ");
            scanf("%s",stdinfo.name);
            printf("Enter your surname = ");
            scanf("%s",stdinfo.surname);
            printf("Enter your student number = ");
            scanf("%d",&stdinfo.number);

            fprintf(recordInformation,"Name = %s\tSurname = %s\tNo = %d\n",stdinfo.name, stdinfo.surname, stdinfo.number);

            printf("Will a new students registration be made?(1/0)\n");
            scanf("%d",&newRegistrationResponse);

            if(newRegistrationResponse == 1){
                continue;
            }
            else{
                break;
            }
        }
        
    }
    fclose(recordInformation);


}