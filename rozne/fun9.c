//Napisz program ktory wczytuje  liczbe calkowita n i wypisuje wartosc 2^n.
//Nie uzywac funkcji wbudowanych. Uzyc samodzielnie zaimplementowanej funkcji liczacej wartosc //2^n.
#include <stdio.h>
#include <stdlib.h>

double potega(int);
int main()
{
int n;
printf("podaj liczbe: ");
scanf("%d",&n);
printf("%f\n",potega(n));
return 0;
}
double potega(int liczba)
{
double pot=2;
if(liczba>0)
{
for (int i=1;i<liczba;i++)
{
pot*=2;
}
return pot;
}

 else if(liczba<0)
{
pot=0.5;
for (int i=-1;i>liczba;i--)
{
pot*=0.5;
}
return pot;

 }
else return 1;

 }
