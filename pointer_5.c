#include <stdio.h>

char *search(char *p,char character)
{
    while(*p != '\0')
    {
        if(*p == character){
            return p;
        }
        p++;
        
    }
}

int main()
{
    char answer, letter, text[] = {"Software Science"};
    
    while(1)
    {
        printf("Enter the letter you want to search for = ");
        scanf("%c",&letter);

        char *pr = search(text, letter);

        if(pr){
            printf("Your character is located at position %p",pr);
        }
        else{
            printf("Your character is not found in the text");
        }
        printf("\nDo you want to continue?(Y/N) = ");
        scanf("%c",answer);
        if(answer == 'N'){
            break;
        }
    }

    return 0;
}