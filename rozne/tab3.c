//Napisz funkcje ktora otrzymuje cztery argumenty dodatnia liczbe calkowita n , dwie n-elementowe tablice tab1 tab2 oraz 2n-elementowa tab3 elementow typu double
//    a) funkcja ma przepisywac zawartosci tablicy 1 oraz tablicy 2 do tablicy 3 w taki sposob, ze na poczatku tablicy 3 powinny znalezc sie elementy tab1, a po nich elementy tab2
//    n=5 tab1 ={​ 8, 2, -4, 5, 9}​ tab2={​3, 6, 2, -5, 7}​
//    tab3={​8, 2,-4,5,9,3,6,2,-5,7}​
//
//    b) funkcja ma przepisywac zawartosci tablicy 1 oraz tablicy 2 do tablicy 3 w taki sposob,
//    ze w komorkach tablicy 3 o nieparzystych indeksach powinny znalezc sie kolejne elementy tab1,
//    a w komorkach o parzystych indekach kolejne elementy tab2
//    n=5 tab1 ={​​​​​​​​ 8, 2, -4, 5, 9}​​​​​​​​ tab2={​​​​​​​​3, 6, 2, -5, 7}​​​​​​​​
//    tab3 = {​​​​​​​3, 8, 6, 2, 2, -4, -5, 5, 7, 9}​​​​​​​
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void f1(int tab[],int tab2[],int tab3[],const int n)
{
for (int i=0;i<n;i++)
{
tab3[i]=tab[i];
tab3[n+i]=tab2[i];
}

}
void f2(int tab[],int tab2[],int tab3[],const int n)
{
int j=0;
for (int i=0;i<n;i++)
{

 tab3[j]=tab2[i];
tab3[j+1]=tab[i];
j=j+2;
}

}
void wypisz(unsigned int n, int * tab)
{
int i;
for(i=0;i<n;i++)
{
printf("%d\t",tab[i]);
}
printf("\n");
}
int main()
{
const int rozmiar=6;
int tab[]={5,4,6,2,1,3};
int tab2[]={2,4,5,7,4,2};
double tab3[rozmiar*2];
wypisz(rozmiar,tab);
wypisz(rozmiar,tab2);
f1(tab,tab2,tab3,rozmiar);
wypisz(rozmiar*2,tab3);
f2(tab,tab2,tab3,rozmiar);
wypisz(rozmiar*2,tab3);

return 0;
}
