//Napisz program, który wczytuje ze standardowego wejœcia nieujemn¹ liczbê ca³kowit¹ n i
//wypisuje na standardowym wyjœciu liczbê n!.
//W programie u¿yj samodzielnie zaimplementowanej funkcji licz¹cej wartoœæ silni.
#include <stdio.h>
#include <stdlib.h>
int silnia(int n){
    int s = 1;
    for(int i=1; i<=n; i++){
        s *= i;
    }
    return s;
}
int main()
{
    unsigned int a;
    scanf("%d", &a);
    printf("%d", silnia(a));
    return 0;
}
