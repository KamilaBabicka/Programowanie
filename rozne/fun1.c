/*Napisz funkcja ktora dostaje jako argument liczbe dodatnia calkowita i wyspiuje na standardowym wyjsciu
wszystkie mozliwe rozklady liczby na na sumy dowolnie wielu kwadratow dodatnich liczb calkowitych.

    25
3^2+4^2

1^2+2^2+2^2+4^2

Kazda liczba naturalna daje sie rozlozyc na sume kwdratow co najwyzej czterech liczb naturalnych.
*/
#include <stdio.h>
#include <stdlib.h>

void rozklad(unsigned int liczba)
{
int i,j,k,l;
for(i=1;i<=liczba;i++)
{
for(j=1;j<=liczba;j++)
{
if(i*i+j*j==liczba)
{
printf("%d*%d+%d*%d=%d\n",i,i,j,j,liczba);
}

 }
}
for(i=1;i<=liczba;i++){
    for(j=1;j<=liczba;j++){
        for(k=1;k<=liczba;k++){
            if(i*i+j*j+k*k==liczba){
            printf("%d*%d+%d*%d+%d*%d=%d\n",i,i,j,j,k,k,liczba);
}
}

}
}
for(i=1;i<=liczba;i++){
    for(j=1;j<=liczba;j++){
        for(k=1;k<=liczba;k++){
            for(l=1;l<=liczba;l++){
                if(i*i+j*j+k*k+l*l==liczba){
                printf("%d*%d+%d*%d+%d*%d+%d*%d=%d\n",i,i,j,j,k,k,l,l,liczba);
}
}

}

}
}

}

int main(){
int n;
printf("podaj n:");
scanf("%d",&n);
rozklad(n);

 return 0;
}
