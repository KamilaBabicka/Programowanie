//Napisz program ktory wczytuje n>2 i zwraca najwiekszy dzielnik wlasciwy liczby n.
// Algorytm wyszukiwania zwracanej liczby umiescic w oddzielnej funkcji.
#include <stdio.h>

int main()
{
int n;

 scanf ( "%i", &n );

 printf ( "%i \n", wyszukaj(n) );

 return 0;
}
int wyszukaj ( int n )
{
for ( int k = (n - 1) ; k >= 0 ; k -= 1 )
{
if ( n % k == 0 )
{
return k;
}
}

 return 0;
}
