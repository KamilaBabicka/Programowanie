// Ile kolejnych liczb naturalnych 1^2+2^2+3^2...+n^2 mozna zsumowac, aby nie przekroczyc 1000?
// Podac wartosc maxymalnej mozliwej sumy i ilosc jej skladnikow.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1, suma=0;
    while(suma + x*x < 1000)
    {
        suma+=x*x;
        x++;
    }
    printf("%d %d", suma, x-1);
    return 0;
}
