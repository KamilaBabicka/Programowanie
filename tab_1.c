//Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą n oraz n-elementową
//tablicę tab o elementach typu int i: przesuwa o jeden w prawo wszystkie elementy tablicy
//(tak, żeby wartość elementu o indeksie 0 znalazła się w elemencie o indeksie 1, wartość elementu o
// indeksie 1 znalazła się w elemencie o indeksie 2, zaś wartość elementu o indeksie n − 1 w elemencie o indeksie 0),
#include <stdio.h>
#include <stdlib.h>
void przes(int n, int tab[])
{
    for(int i=n; i>0; i--)
        {
            tab[i] = tab[i-1];
        }
    tab[0]=tab[n];
}
int main()
{

    int tablica[5] = {1,2,3,4,5};
    przes(5, tablica);
    for(int i=0; i<5; i++)
        {
        printf("%d", tablica[i]);
        }
    return 0;
}
