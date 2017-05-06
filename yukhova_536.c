#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int *f(int  *array, int n)
 {
  int i, buff;
  for (i=0; i<n; i++)
  {
   if ((i+1)%2==0) /*Если индекс элемента делится на 2 без остатка - ставим его вперед*/
    {
     buff=array[i];
     array[i]=array[i/2];
     array[i/2]=buff;
    }
  }
 return array;
 }
int main ()
{
 int j;
 int *ptr;
 int k;
 printf ("ВВедите количество символов строки \n");
 scanf("%d", &k);
 ptr =(int*)malloc(sizeof(int)*k);
 for (j=0; j<k ; j++)
  {
   printf ("ВВедите %d элемент массива  ", j+1);
   scanf ("%d", &ptr[j]);
  }
ptr=f(ptr, k);
printf("Otvet  ");
for (j=0; j<k; j++)
  { 
   printf ("  %d", ptr[j]);
  }
printf("\n");
return 0;
}   
     