/*Napisz rekurencyjna funkcje,
ktora dla otrzymanej w argumencie nieujemnej liczby calkowitej
zwraca wartosc n!. */
#include <stdio.h>
#include <stdlib.h>

long int silnia(unsigned int n)
{
if(n<2)
return 1;

return n*silnia(n-1);
}

int main()
{
int n;
scanf("%d",&n);
printf("%d",silnia(n));
return 0;
}
