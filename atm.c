#include <stdio.h>

main()
{
    int cardNumber = 1574564123107521, cardPassword, id = 14575834586, applicationPassword, a = 1, passwordConfirmation = 1;
    int enteredCardNumber, enteredCardPassword, enteredId, enteredApplicationPassword, againApplicationPassword;

    printf("Welcome to our mobile banking application.\nIf you have obtained your card from our bank, you must register in our application.\nTo register, please enter your card number\n");
    
    while (1)
    {
        printf("Card Number = ");
        scanf("%d",&cardNumber);

        if(enteredCardNumber != cardNumber)
        { 
            printf("Entered card number is incorrect, please try again.");
            continue;
        }
        else
            while(1)
            {
                printf("The card number has been entered correctly.\nTo register for our application, please enter your ID number and set a password.");
                printf("ID = ");
                scanf("%d",&enteredId);
                if (enteredId != id)
                {
                    printf("Entered ID number is incorrect, please try again");
                    continue;
                }
                while (1)
                {
                    if(passwordConfirmation == 0)
                        break;
                    printf("Enter your password = ");
                    scanf("%d",&applicationPassword);

                    while (a < 4)
                    {
                        printf("Enter your password again = ");
                        scanf("%d",&againApplicationPassword);
                        
                        a = 1;

                        if (againApplicationPassword != applicationPassword)
                        {
                            printf("The password you entered again does not match the entered password, please try again");
                            a++;
                        }
                        else
                            passwordConfirmation = 0;
                    }    
                }
            }
        


    }
    printf("Your registration has been successfully completed. Welcome to our family. You can now log in to our application.");

    while(1)
    {
        printf("Enter your ID number = ");
        scanf("%d",&enteredId);
        printf("Enter your password = ");
        scanf("%d",&enteredApplicationPassword);
        
        if ((enteredId != id) || (enteredApplicationPassword != applicationPassword))
        {
            printf("Entered ID or password is incorrect, please try again.");
        }
        else
            break;
    }
}