//Napisz funkcje otrzymujaca jako argumenty wkaszniki do dwoch zmiennych typu int,
//ktora zamienia ze soba wartosci wskazywanych zmiennych.
#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;

 printf("Podaj a i b\n");
scanf("%i%i", &a,&b);

 printf ( "%i %i \n", a, b );
zamien ( &a, &b );
printf ( "%i %i \n", a, b );

 return 0;
}

void zamien ( int* a, int* b )
{
int tmp = *a;
*a = *b;
*b = tmp;
}
