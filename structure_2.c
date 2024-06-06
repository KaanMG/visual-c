#include <stdio.h>
#include <string.h>

struct customer
{
    int id;
    char name[30];
    double balance;
};

int main()
{
    struct customer cust[3];
    char enteredName[30];

    for(int i = 0; i <=2; i++)
    {
        printf("Enter your id = ");
        scanf("%d",&cust[i].id);
        printf("Enter your name = ");
        scanf("%s",cust[i].name);
        printf("Enter your balance = ");
        scanf("%lf",&cust[i].balance);
    }
    
    printf("Please enter the name you want to get information about = ");
    scanf("%s",enteredName);

    for(int j = 0; j <= 2; j++)
    {
        if(strcmpi(enteredName,cust[j].name) == 0){
            printf("Your id = %d\nYour name = %s\nYour balance = %lf\n", cust[j].id, cust[j].name, cust[j].balance);
        }
        else{
            printf("Such a person could not be found");
        }
    }
    
    /*
    for(int j = 0; j <= 2; j++)
    {
        printf("Your id = %d\nYour name = %s\nYour balance = %lf\n", cust[j].id, cust[j].name, cust[j].balance);
    }
    */

}