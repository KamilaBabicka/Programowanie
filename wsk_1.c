//Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch zmiennych typu int,
//która zwraca jako wartość mniejszą z liczb wska�zywanych przez argumenty.
#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int *b)
{
    if (*a>*b)
        return *b;
    else return *a;
}

int main()
{
    int a=15, b=14;
    printf("%d\n", mniejsza(&a, &b));
}
