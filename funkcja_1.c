//Napisz program, kt�ry wczytuje ze standardowego wej�cia
//nieujemn� liczb� ca�kowit� n i wypisuje na standardowym wyj�ciu liczb� n!.
//W programie u�yj samodzielnie zaimplementowanej funkcji licz�cej warto�� silni.

#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    int x=1;
    for(int i=1; i<=n; i++)
    {
        x*=i;
    }
    return x;
}

int main()
{
    unsigned int n;
    scanf("%d", &n);
    printf("%d", silnia(n));
    return 0;
}
