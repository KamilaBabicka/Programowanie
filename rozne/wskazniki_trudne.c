//Napisz funkcje ktora otrzymuje trzy argumenty,
//dwa wskazniki na funkcje o jednym argumencie typu int zwracajacych wartosc typu int,
//wartosc n typu unsigned int
//zwraca true jesli otrzymane w argumentach funkcje
//sa rowne dla wartosci od 0 do n
//i false w przeciwnym razie
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int (*wskaznik)(int);

int dodaj(int a)
{
    return a+2;
}
int suma(int b)
{
    return b+2;
}
bool funkcja(wskaznik funkcja1, wskaznik funkcja2, unsigned int n)
{
    int licznik=0;
    for(int i=0; i<=n; i++)
    {
        if (dodaj(i)==suma(i))
            licznik++;
    }
    if (licznik==n+1)
        return true;
    else return false;
}

int main()
{
    printf("True=1 False=0: %d", funkcja(dodaj,suma,41));
    return 0;
}
