//Napisz funkcj�, kt�ra otrzymuje dwa argumenty:
//dodatni� liczb� ca�kowit� n oraz n-elementow� tablic� tab o elementach typu int
//i zwraca jako warto��:  sum� kwadrat�w element�w tablicy tab.
#include <stdio.h>
#include <stdlib.h>

int suma_kw(int n, int tab[])
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        suma+=(tab[i]*tab[i]);
    }
return suma;
}
int main()
{
   int tab[5]={1,2,3,4,5};
   printf("%d", suma_kw(5, tab));
   return 0;
}
