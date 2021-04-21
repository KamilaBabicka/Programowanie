//Napisz funkcje rekurencyjna, ktora dla otrzymanej na argumentach pary nieujemnych liczb calkowitych n i m
//zwraca wartosc f(n,m) gdzie funkcja f jest zdefiniowana w nastepujacy sposob
//f(n,0)=n; f(0,m)=m;  f(n,m)=f(n-1,m)+f(n,m-1)+f(n-1,m-1) dla n,m>0.
#include <stdio.h>
#include <stdlib.h>

int f(unsigned int n,unsigned int m)
{
if(m==0)
return n;
else if(n==0)
return m;
else
return f(n-1,m)+f(n,m-1)+f(n-1,m-1);
}
// Wyswietlic wszystkie wartosci f(n,m),
// ktore mieszcza sie pomiedzy 30, a 40.
//lacznie z uwzglednieniem (n,m) dla ktorych dana wartosc wystepuje.

int main()
{
int n,m;
scanf("%d %d",&n,&m);
printf("%d",f(n,m));

int wynik,n,m;
for (int i=0;i<=10;i++)
{
for(int j=0;j<=i;j++)
{
wynik=funkcja(i,j);
if(wynik>=30 && wynik<=40)
printf("%d,%d=%d",i,j,wynik);
return 0;
}
