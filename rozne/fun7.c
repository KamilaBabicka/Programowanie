/*Napisz funkcje rekurencyjna zwracajaca dla otrzymanej
nieujemnej liczby calkowitej n wartosc n-tego wyraz ciagu
okreslonego w nastepujacy sposob:
a0=a1=1, an=a_{n-1}+ 2*a_{n-2} +3 , n>1.*/
#include <stdio.h>
#include <stdlib.h>
int rekurencja(unsigned int n)
{
if (n<=1)
return 1;
return rekurencja(n-1)+2*rekurencja(n-2)+3;
}
int main()
{
printf("%d",rekurencja(5));
return 0;
}
