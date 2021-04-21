// Napisac funkcje ktora dostaje jako argument dodatnia liczbe calkowita n,
// rezerwuje w pamieci blok n zmiennych typu int i zwraca jako wartosc wskaznik do poczatku zarezerwowanego bloku pamieci.
#include <stdio.h>
#include <stdlib.h>

int *f(unsigned int n)
{
return malloc(n*sizeof(int));
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
