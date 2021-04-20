//Napisz funkcjê, która otrzymuje dwa argumenty:
//nieujemn¹ liczbê ca³kowit¹ n oraz n-elementow¹ tablicê tab elementów typu int i
//oraz podwaja wartoœæ wszystkich elementów w tablicy tab.
#include <stdio.h>
#include <stdlib.h>

void podwojone(int n, int tab[])
{
    for (int i=0;i<n;i++)
        tab[i]=tab[i]*2;
}
int main()
{
    int tab[5]={1,2,3,4,5};
    podwojone(5, tab);
    for (int i=0;i<5;i++)
    {
        printf("%d\t", tab[i]);
    }

return 0;
}
