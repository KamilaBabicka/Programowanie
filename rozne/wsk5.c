//Napisac funkcje ktorej argumentami sa int n oraz wskaznik w do zmiennej typu int,
//ktora przepisuje wartosc zmiennej n pod adres w.
#include <stdio.h>
#include <stdlib.h>

void wska(int a,int *m)
{
*m=a;
}
int main()
{
int w,j;
int *n;
printf("Podaj w i j\n");
scanf("%i", &w);
wska(w,&n);
printf(" wartosc w to %i\n",n);
}
