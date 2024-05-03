#include <stdio.h>

void change(char **pptr)
{
    *pptr = "Engineering Computer";
}

int main()
{

    char *text = "Computer Engineering";

    printf("%p\n",(void *)text);
    printf("%s\n", text);

    change(&text);

    printf("%p\n",(void *)text);
    printf("%s\n",text);

}