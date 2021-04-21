//Napisz funkcje otrzymujaca jako argumenty wskazniki do dwoch zmiennych typu int,
//ktora zamienia ze soba wartosci wskazywanych zmiennych,
//tylko gdy zmienna wskazywana przez drugi argument jest mniejsza od zmiennej wskazywanej przez pierwszy agument.
#include <stdio.h>
#include <stdlib.h>

void wska(int *a,int *m)
{
int temp=*a;
int temp1=*m;
if(temp>temp1)
{
*a=temp1;
*m=temp;
}
}
int main()
{
int w,j;
printf("Podaj w i j\n");
scanf("%i%i", &w,&j);
printf(" wartosc to %i%i\n",w,j);
wska(&w,&j);
printf(" wartosc to %i%i\n",w,j);
}
