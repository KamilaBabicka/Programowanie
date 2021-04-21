/*
Napisz funkcja ktora dostaje jako argument liczbe dodatnia calkowita n
oraz m i wyspiuje na standardowym wyjsciu wszystkie mozliwe rozklady liczby
na na sumy dwoch dodatnich liczb calkowitych podniesionych do potegi m.

    n=133
m=3 (uzyjmy funkcji i do potegi m-tej z poprzednich zajec)
133=5^3+2^3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void kwadrat(int n,int m)
{
for(int i=1;i<=n;i++){
   for(int j=1;j<=i;j++){
    if(pow(i,m)+pow(j,m)==n)
     printf("%d^%d+%d^%d=%d\n",i,m,j,m,n);
   }
}
}
int main()
{
int n,m;
scanf("%d %d",&n,&m);
kwadrat(n,m);
return 0;
}
