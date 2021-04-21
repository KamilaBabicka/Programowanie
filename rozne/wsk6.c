//Napisz bezargumentowa funkcje, ktora rezerwuje pamiec dla pojedynczej zmiennej typu int i zwraca jako wartosc wskaznik do niej.
#include <stdio.h>
#include <stdlib.h>

int f()
{
int a;
return &a;
}

int main()
{
printf("%d",f());

return 0;
}
