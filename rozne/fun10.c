//Napisz program ktory wczytuje nieujemne liczby calkowity n oraz m  i wypisuje wartosc n^m.
//Nie uzywac funkcji wbudowanych. Uzyc samodzielnie zaimplementowanej funkcji
//dwoch zmiennych n oraz m liczacej wartosc n^m.
#include <stdio.h>
#include <stdlib.h>

int pow(int n,int m)
{
int liczba = 1;
for(int i=0;i<m;i++)
liczba*=n;

return liczba;
}

int main()
{
int n,m;
scanf("%d %d",&n,&m);
printf("%d",pow(n,m));
return 0;
}
