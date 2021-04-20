//Napisz program, który wczytuje ze standardowego wejœcia
//nieujemn¹ liczbê ca³kowit¹ n i wypisuje na standardowym wyjœciu liczbê n!.
//W programie u¿yj samodzielnie zaimplementowanej funkcji licz¹cej wartoœæ silni.

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
