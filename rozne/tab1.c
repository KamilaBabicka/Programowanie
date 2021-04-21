//Napisz funkcje ktora otrzymuje trzy argumenty dodatnia liczbe calkowita n oraz dwie n-elementowe tablice tab1 tab2 elementow typu int


#include <stdio.h>

// a) przepisuje zawartosc tab1 do tab2
void przepisywanie ( int n, int tab1[ n ], int tab2[ n ] )
{
for ( int i = 0 ; i < n ; i += 1 )
{
tab1[ i ] = tab2[ i ];
}
}

// b) przepisuje zawartosc tab1 do tab2 w odwrotnej kolejnosci
void odwrotna ( int n, int tab1[ n ], int tab2[ n ] )
{
for ( int i = 0 ; i < n ; i += 1 )
{
tab2[ i ] = tab1[ n - 1 - i ];
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

    for ( int i = 0 ; i < n ; i += 1 )
    {
        scanf ( "%i", &tab1[ i ] );
    }

    for ( int i = 0 ; i < n ; i += 1 )
    {
    scanf ( "%i", &tab2[ i ] );
    }

    wyswietl ( n, tab1 );
    wyswietl ( n, tab2 );

    printf("-----------------------------\n");

    odwrotna ( n, tab1, tab2 );

    wyswietl ( n, tab1 );
    wyswietl ( n, tab2 );

    return 0;
}
