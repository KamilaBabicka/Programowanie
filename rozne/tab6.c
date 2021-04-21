//    Napisz funkcje ktora otrzymuje trzy argumenty dodatnia liczbe calkowita n oraz dwie n- elementowe tablice tab
//    o elementach typu double przechowujace n-wymiarowe wektory i zwraca jako wartosc iloczyn skalarny wektorow otrzymanych w argumentach.
//    iloczynem skalarnym wektorow v1,v2,...,vn oraz w1, w2, ...,wn  nazywamy v1*w1+v2*w2 + ... + vn *wn.
#include <stdio.h>
#include <stdlib.h>

int xda(unsigned int n,double tab[],double tab1[])
{
int wynik=0;
double temp[n];
for(int i=0;i<n;i++)
{
wynik+=tab[i]*tab1[i];
}
return wynik;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
