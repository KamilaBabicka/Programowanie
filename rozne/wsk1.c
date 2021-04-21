//Napisz funkcje otrzymujaca jako argumenty wskazniki
//do dwoch zmiennych typu int, ktora zwraca jako wartosc
//wkaznik na zmienna mniejsza z liczb przechowywanych przez argumenty.
#include <stdio.h>
#include <stdlib.h>

void wska(int *a,int *m)
{
int temp=*a;
int temp1=*m;
*a=temp1;
*m=temp;
}
int main()
{
int w,j;
printf("Podaj a i b\n");
scanf("%i%i", &w,&j);
printf(" wartosc to %i%i\n",w,j);
wska(&w,&j);
printf(" wartosc to %i%i\n",w,j);
}
