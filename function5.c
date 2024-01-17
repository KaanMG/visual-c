#include <stdio.h>
#include <stdlib.h>

//Open this function from the command prompt. It is executed by typing function_name value1 value2. Translate to English.

int main(int argc, char *argv[])
{
    int a,b;

    a = atoi(argv[1]); // atoi function converts a character data type to an integer data type.
    b = atoi(argv[2]); // stdlib.h library is required for its operation.

    printf("%d",a+b);

    return 0;
}