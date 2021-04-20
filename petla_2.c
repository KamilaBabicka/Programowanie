//Wypisz wszystkie liczby 2cyfrowe, ktore maja dokladnie 4 rozne dzielniki
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=10;
    int n=100;
    int x=0;
    for(i;i<n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            if(i%j==0)
                x++;
        }
        printf("%d\n",x);
        if (x==4){
            printf("%d\n", i);
            x=0;
        }
    }
    return 0;
}
