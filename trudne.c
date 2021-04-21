//Napisz program, który wczytuje ze standardowego wejœcia
//nieujemn¹ liczbê ca³kowit¹ n
//i wypisuje na standardowym wyjœciu
//sumê liczb mniejszych od n i zarazem wzglêdnie pierwszych z n.
//Algorytm wyliczania sumy podziel na dwie funkcje.
#include <stdio.h>
#include <stdlib.h>


int nwd(int a, int b)
{
    while(a!=b)
    {
        if (a<b)
            b=b-a;
        else a=a-b;
    }
    return a;
}
int suma(int n)
{
    int suma=0;
    for(int i=n-1; i>0; i--)
    {
        if(nwd(i,n)==1)
        suma+=i;
    }
    return suma;
}

int main()
{
    printf("%d", suma(10));
    return 0;
}
