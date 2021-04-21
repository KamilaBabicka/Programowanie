/*
    Napisz funkcje ktora wczytuje ze standardowego wejscia liczbe calkowita
    i zwraca ja jako swoja wartosc. Dodatkowo funkcja powinna sumowac wszystkie
    wczytane dotad wartosci i przy kazdym wywolaniu wypisywac na standardowym
    wyjsciu ich aktualna sume. */
#include <stdio.h>

int main()
{
printf ( "%i \n", wczytaj() );
printf ( "%i \n", wczytaj() );

 return 0;
}

int wczytaj ()
{
int tmp;
static int suma = 0;

 scanf ( "%i", &tmp );

 suma = suma + tmp;
printf ("x + %i = %i \n", tmp, suma );

 return tmp;
}
