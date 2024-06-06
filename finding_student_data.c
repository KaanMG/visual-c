#include <stdio.h>
#include <string.h>

int main()
{
    FILE *recordInformation;
    char name[30], dataName[30], dataSurname[30];
    int dataNumber, control = 0;

    recordInformation = fopen("C:\\Users\\hp\\Desktop\\C\\visual c\\filing\\student_registiration_system.txt","r");

    if(recordInformation == NULL){
        printf("File not found!");
    }

    else{
        printf("Whose record do you want to find?\n");
        scanf("%s",name);
        while (fscanf(recordInformation,"%s %s %d",dataName, dataSurname, &dataNumber) != EOF)
        {
            if(strcmpi(dataName, name) == 0){
                printf("Name = %s\tSurname = %s\tStudent number = %d\n",dataName, dataSurname, dataNumber);
                control = 1;
            }
            
        }
        if(control != 1){
            printf("Person record not found!");
        }
    }
}