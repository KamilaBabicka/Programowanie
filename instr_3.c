//Napisac program ktory wczytuje cztery inty abcd i zwraca mediane tego zbioru

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    float x;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int min=0;
    int max=0;
    if (a<b)
        {
            min=a;
            max=b;
        }
    else
        {
            min=b;
            max=a;
        }
    if (c<min)
        {
            min=c;
        }
    else if (c>max)
        {
            max=c;
        }
    if (d<min)
        {
            min=d;
        }
    else if (d>max)
        {
            max=d;
        }
    x = a+b+c+d - (max+min);
    x=x/2;
    printf("%f", x);
return 0;
}
