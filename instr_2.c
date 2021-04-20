
// Napisac program ktory wczytuje trzy wartosci calkowite abc i zwraca srodkowa co do wielkosci
//gdy sa one rozne miedzy soba. W przeciwnym wypadku zwrocony ma zostac komunikat Nie ma srodkowej wartosci

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, x;
    scanf("%d%d%d", &a, &b, &c);
    int min=0;
    int max=0;
    if (a==b || b==c || a==c)
        {
            printf("Nie ma srodkowej wartosci");
            return 0;
        }
    if (a<=b)
        {
            min=a;
            max=b;
        }
    else
        {
            min=b;
            max=a;
        }
    if (c<=min)
        {
            min=c;
        }
    else if (c>max)
        {
            max=c;
        }
    x = a+b+c - (max+min);
    printf("%d", x);
return 0;
}
