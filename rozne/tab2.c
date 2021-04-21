//Napisz funkcje ktora otrzymuje trzy argumenty dodatnia liczbe calkowita n oraz trzy n-elementowe tablice tab1 tab2 tab3 elementow typu int
//    a) do 14tablicy 3 przypisujemy wartosci sum elementow z tablic 1 oraz 2 o tych samych indeksach
//
//    b) do tablicy 3 przypisujemy wieksza z wartosci elementow z tablic 1 oraz 2 z odpowiadajacych indeksow
//
//    c) zawartosc tablic 1 do tablicy 2, tablicy 2 do tablicy 3 oraz tablicy 3 do tablicy 1

#include <stdio.h>

void przypisywanie ( int n, int tab1[ n ], int tab2[ n ], int tab3[ n ] )
{

 for ( int i = 0 ; i < n ; i += 1 )
{
tab3[ i ] = tab1[ i ] + tab2[ i ];
}
}

void wiekszy ( int n, int tab1[ n ], int tab2[ n ], int tab3[ n ] )
{

 for ( int i = 0 ; i < n ; i += 1 )
{
if ( tab1[ i ] < tab2[ i ] )
{
tab3[ i ] = tab2[ i ];
}
else
{
tab3[ i ] = tab1[ i ];
}
}
}

void zamiana ( int n, int tab1[ n ], int tab2[ n ], int tab3[ n ] )
{
int tmp;

 for ( int i = 0 ; i < n ; i += 1 )
{
tmp = tab2[ i ];
tab2[ i ] = tab1[ i ];
tab1[ i ] = tab3[ i ];
tab3[ i ] = tmp;
}
}


void wyswietl ( int n, int tab[ n ] )
{
for ( int i = 0 ; i < n ; i += 1 )
{
printf ( "%i ", tab[ i ] );
}
printf( "\n" );
}

int main()
{
int n;

 scanf ( "%i", &n );

 int tab1[ n ];
int tab2[ n ];
int tab3[ n ];

 for ( int i = 0 ; i < n ; i += 1 )
{
scanf ( "%i", &tab1[ i ] );
}

 for ( int i = 0 ; i < n ; i += 1 )
{
scanf ( "%i", &tab2[ i ] );
}

 for ( int i = 0 ; i < n ; i += 1 )
{
scanf ( "%i", &tab3[ i ] );
}

 wyswietl ( n, tab1 );
wyswietl ( n, tab2 );
wyswietl ( n, tab3 );

 printf ( "----------------\n" );

 przypisywanie ( n, tab1, tab2, tab3 );

 wyswietl ( n, tab1 );
wyswietl ( n, tab2 );
wyswietl ( n, tab3 );

 return 0;
}
