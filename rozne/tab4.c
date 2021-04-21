//Napisz funkcje ktora otrzymuje cztery argumenty dodatnia liczbe calkowita n , trzy n-elementowe tablice tab1 tab2 tab3 elementow typu int, ktora ma dzialac w nastepujacy sposob :
//komorka tab1[i] powinna zawierac najiwkesza sposrod pierwotnych wartosci tab1[i], tab2[i], tab3[i]
//tab2[i] ma zawierac druga co do wielkosci sposrod pierwotnych wartosci tab1[i], tab2[i], tab3[i]
//    tab3[i] ma zawierac najmniejsza
//    a,b,c
#include <stdio.h>
#include <stdlib.h>
void wypisz(unsigned int n,int *tab)
{
for(int i=0;i<n;i++)
{
printf("%d ",tab[i]);
}
}
int max(int a,int b ,int c)
{
int max=0;
if((a>=b)&&(a>=c))
{
max=a;
}
else if ((a<=b)&&(b>=c))
{
max=b;
}
else
{
max=c;
}
return max;
}
int min(int a,int b ,int c)
{
int max=b;
if((a<=b)&&(a<=c))
{
max=a;
}
else if((a>=b)&&(b<=c))
{
max=b;
}
else
{
max=c;
}
return max;
}
int srednia(int a,int b ,int c)
{
if(b!=max(a,b,c))
{
return b;
}
if(c!=max(a,b,c))
{
return c;
}
else
{
return a;
}
}
void xda(unsigned int n,int tab[],int tab1[],int tab2[])
{
for(int i=0;i<n;i++)
{
tab[i]=max(tab[i],tab1[i],tab2[i]);
tab1[i]=srednia(tab[i],tab1[i],tab2[i]);
tab2[i]=min(tab[i],tab1[i],tab2[i]);
}
}
int main()
{
const int n=10;
int tab[10]={5,2,3,4,5,6,8,8,8,1};
int tab1[10]={1,1,5,3,2,1,8,8,8,1};
int tab2[10]={2,6,7,8,9,5,3,2,1,4};
printf("tab 1\n");
wypisz(n,tab);
printf("\n tab 2\n");
wypisz(n,tab1);
printf("\n tab 2\n");
wypisz(n,tab2);
xda(n,tab,tab1,tab2);
printf("\n tab 3\n");
printf("tab 1\n");
wypisz(n,tab);
printf("\n tab 2\n");
wypisz(n,tab1);
printf("\n tab 2\n");
wypisz(n,tab2);
}
