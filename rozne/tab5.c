//    Napisz funkcje ktora otrzymuje dwa argumenty dodatnia liczbe calkowita n oraz n-elementowa tablice elementow typu int
//    a) zwraca najwieksza wartosc przechowywana w tablicy
//    b) zwraca najmniejsza wartosc przechowywana w tablicy
//    c) zwraca indeks elementu tablicy o najwiekszej wartosci
//    d) zwraca indeks elementu o najmniejszej wartosci
//    e) zwraca najwieksza sposrod wartosci bezwzglednych przechowywanych w tablicy
//    f) zwraca indeks elementu o najwiekszej wartosci bezwzglednej
#include <stdio.h>
#include <stdlib.h>

int f1(int tab[],const int n)
{
int maks=0, index=0;
for(int i=0;i<n;i++)
{
if (tab[i]>maks)
{
maks=tab[i];
index=i;
}
}
return maks, index;
}
void wypisz(unsigned int n,int *tab)
{
for(int i=0;i<n;i++)
{
printf("%d ",tab[i]);
}
}
int xda(unsigned int n,int tab[])
{
int wynik=0;
for(int i=0;i<n;i++)
{
if(wynik<tab[i])
{
wynik=tab[i];
}
}
return wynik;
}
int xdb(unsigned int n,int tab[])
{
int wynik=tab[1];
for(int i=0;i<n;i++)
{
if(wynik>tab[i])
{
wynik=tab[i];
}
}
return wynik;
}
int main()
{
const int n=10;
int tab[10]={5,2,3,4,5,6,8,8,8,1};
int tab1[10]={1,1,5,3,2,1,8,8,8,1};
int tab2[10]={2,6,7,8,9,5,3,2,1,4};
printf("tab 1\n");
wypisz(n,tab);
print("%d",xda(n,tab));
}

