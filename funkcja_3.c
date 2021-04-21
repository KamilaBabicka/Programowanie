//Napisz funkcję, która wczytuje ze standardowego wejścia liczbę całkowitą
//i zwraca ją jako swoją wartość.
//Dodatkowo funkcja powin�na sumować wszystkie
//dotychczas wczytane wartości i przy każdym swoim wywołaniu
//wypisywać na standardowym wyjściu ich aktualną sumę.
#include <stdio.h>
#include <stdlib.h>

int wczytaj()
{
    static int suma=0;
    int x;
    scanf("%d", &x);
    suma+=x;
    printf("%d\n", suma);
    return x;
}
int main()
{
    printf("%d\n", wczytaj());
    printf("%d\n", wczytaj());
    printf("%d\n", wczytaj());
    return 0;
}
