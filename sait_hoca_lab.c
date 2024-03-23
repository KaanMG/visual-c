#include <stdio.h>
#include <math.h>

int main()
{
    /*
    float a = 123.826;

    printf("%f\n%f\n%f",ceil(a),floor(a),round(a));

    return 0;
    

   int i = 10;
   int *p;
   p = &i;

   printf("%d\n%p",i,p);
   

  int i = 100;
  int *p;
  p = &i;

  printf("%d\n",&i);
  printf("%d\n",p);
  printf("%p\n",&i);
  printf("%x\n",p);
  printf("%X\n",&i);
  

 int i = 10, j = 5, k = 3;
 int *p = &i, *q = &j, *r = &k;
 *p = i + j;
 *q = *r + j;
 *r = i + *p;

 printf("i = %d, j = %d, k = %d",i, j, k);

 return 0;

 

    int i = 5;

    int *p = &i, **q = &p, ***r = &q, ****t = &r, *****k = &t ;
    ****t = 12;
    printf("%d",*****k);
    
    */

int i = 5, j = 6, temp;

int *p = &i, *q = &j;

temp = *p;
*p = *q;
*q = temp;

printf("%d, %d",i,j);



}