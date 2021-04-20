//Napisaæ program który wczytuje trzy wartoœci ca³kowite a b c
//i zwraca minimalna z nich jesli jest kilka minimow to jedna  z nich

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int x=0;
    if (a<=b)
    {
        x=a;
    }
    else x=b;
    if (c<=x)
    {
        x=c;
    }
    printf("%d", x);
return 0;
}
