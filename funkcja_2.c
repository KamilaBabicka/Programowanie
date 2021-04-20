//Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argumencie
//nieujemnej liczby całkowitej n
//wartość elementu o indeksie n
//ciągu zdefiniowanego w następujący sposób:
//a0 = a1 = 1 an = an−1 + 2 ∗ an−2 + 3 dla n > 1

#include <stdio.h>
#include <stdlib.h>

int ciag(int n)
{
    if(n==0)
        return 1;
    if(n==1)
        return 1;
return ciag(n-1)+2*(ciag(n-2))+3;
}
int main()
{
    printf("%d", ciag(3));
    return 0;
}
