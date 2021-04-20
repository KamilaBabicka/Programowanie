//Napisz funkcjê, która otrzymuje dwa argumenty:
//dodatni¹ liczbê ca³kowit¹ n oraz n-elementow¹ tablicê tab o elementach typu int
//i zwraca jako wartoœæ:  sumê kwadratów elementów tablicy tab.
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
