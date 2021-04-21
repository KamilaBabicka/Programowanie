//Napisz funkcje ktorej argumentami sa dwa wskazniki do stalych typu int,
//zas zwracana wartoscia jest suma wartosci zmiennych wskazywanych przez argumenty.
#include <stdio.h>
#include <stdlib.h>

int wska(const int *a,const int *m)
{
int temp=*a;
int temp1=*m;
return temp+temp1;
}
int main()
{
const int w,j;
printf("Podaj w i j\n");
scanf("%i%i", &w,&j);
printf("%d" ,wska(&w,&j));
printf(" wartosc to %i%i\n",w,j);
}
