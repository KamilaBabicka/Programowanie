// Napisz bezargumentowa funkcje, ktora rezerwuje pamiec dla pojedynczej zmiennej typu double i zwraca jako wartosc wskaznik do niej.
#include <stdio.h>
#include <stdlib.h>

double *wska()
{
return malloc(sizeof(double));
}
int main()
{
double *a=wska();
printf(" wartosc w to %f\n",*a);
*a=20;
printf(" wartosc w to %f\n",*a);
}
