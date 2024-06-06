#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char sentence[100], caracter;
    
    fp = fopen("C:\\Users\\hp\\Desktop\\C\\visual c\\filing\\sentence.txt","w");

    if(fp == NULL){
        printf("Driver not found!");
    }

    else{
        printf("Enter your sentece = ");
        gets(sentence);

        for(int i = 0; i < strlen(sentence); i++){
            putc(sentence[i], fp);
        }
        fclose(fp);
    }

    fp = fopen("C:\\Users\\hp\\Desktop\\C\\visual c\\filing\\sentence.txt","r");

    if(fp == NULL){
        printf("File not found!");
    }

    else{
        while ((caracter = getc(fp)) != EOF) 
        {
            printf("%c",caracter);
        }
        fclose(fp);
    }
    
}