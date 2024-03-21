#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    
    /*
    float number;
    
    srand(time(NULL));
    number = rand();
    
    printf("Enter the number = ");
    scanf("%f",&number);
    
    
    if(number < 0)
    {
        number *= -1.0;
    }
    

    printf("%f",round(sqrt(abs(number))));

    return 0;
    */

   int i = 10, j = 5;
   int *p, *q;

   p = &i;
   q = &j;

   j = *p + *q;

    printf("i = %d, j = %d\n",i ,j);
    printf("*p = %d *q = %d\n",*p, *q);
    
    /*
    printf("address of i = %d\n",&i);
    printf("address of i = %d\n",p);
    printf("address of i = %p\n",p);
    printf("address of i = %x\n",p);
    printf("address of i = %X\n",p);
    */
   

}