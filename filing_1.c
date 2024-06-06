#include <stdio.h>

int main()
{
    FILE *fp;
    int number;

    fp = fopen("C:\\Users\\hp\\Desktop\\C\\visual c\\filing\\filing.txt","r");

    if(fp == NULL){
        printf("File not found");
    }

    else{
        while(fscanf(fp,"%d",&number) != EOF)
        {
            printf("%d\n",number);
        }
    }
}