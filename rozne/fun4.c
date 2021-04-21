/*
    Napisz funkcje generujaca liczby pseudolosowe.
    Pierwsza wartoscia powinna byc dowolna liczba z przedzialu (0,1).
    Kolejne wyliczamy ze wzoru x_{​n}​ = 1 - (x_{​n-1}​) ^2
    0.5 ; 0.75 ; 0.45 ,... */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max, min;
    srand(time(NULL));
    scanf("%d %d", &max, &min);
    int r = rand()%(max-min + 1) + min;
    printf("%d", r);
    return 0;
}
