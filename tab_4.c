//Napisz funkcje ktora otrzymuje dwa argumenty
//nieujemna liczba calkowita n oraz n-elementowa tablice tab elementow typu int. 

#include <stdio.h>
#include <stdlib.h>
void wypisz(unsigned int n,int *tab){
    for(int i=0;i<n;i++){
    printf("%d",tab[i]);
    }
}
// a) nadawala wartosc 0 wszystkim elementom tablicy tab 
void zera(unsigned int n,int tab[]){
    for(int i=0;i<n;i++){
    tab[i]=0;
    }
}
//b) zapisuje do kolejnych elementow tablicy wartosci rowne ich indeksom
void index (int n, int tab[n])
{
    for (int i=0; i<n ;i+=1)
    {
        tab[i] = i;
    }
}
// c) podawaja wartosc wszystkich elementow w tablicy
void podwojone (int n, int tab[n])
{
    for (int i=0; i<n; i+=1)
    {
        tab[i]=tab[i]*2;
    }
}
//d) zamienia wszystkie elemente na ich wartosci bezwzgledne
void bezwzgledne (int n, int tab[n])
{
    for (int i=0; i<n; i+=1)
    {
        if (tab[i]<0)
            tab[i]=-tab[i];
    }
}
int main()
{
unsigned int n=10;
int tab[10]={5,2,3,4,5,6,8,8,8,1};
    wypisz(n,tab);
    printf("\n");
    zera(n,tab);
    printf("\n");
    wypisz(n,tab);
    printf("\n");
    index(n,tab);
    printf("\n");
    wypisz(n,tab);
    printf("\n");
    podwojone(n,tab);
    printf("\n");
    wypisz(n,tab);
    printf("\n");
    bezwzgledne(n, tab);
    printf("\n");
    wypisz(n,tab);
    printf("\n");

}
