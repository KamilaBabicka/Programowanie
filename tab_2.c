//Napisz funkcj�, kt�ra otrzymuje dwa argumenty:
//nieujemn� liczb� ca�kowit� n oraz n-elementow� tablic� tab element�w typu int i
//oraz podwaja warto�� wszystkich element�w w tablicy tab.
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
