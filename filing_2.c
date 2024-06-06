#include <stdio.h>

int main()
{
    FILE *fp;
    int number;

    fp = fopen("C:\\Users\\hp\\Desktop\\C\\visual c\\filing\\filing.txt","a");

    if(fp == NULL){
        printf("File not found");
    }

    else{
        for(int i = 0; i < 5; i++)
        {
            printf("Enter your number %d = ",(i+1));
            scanf("%d",&number);
            fprintf(fp,"%d\n",number);
        }
    }
    fclose(fp);
}