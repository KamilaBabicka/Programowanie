
//Napisz program, kt�ry wczytuje ze standardowego wej�cia dwie liczby ca�kowite
//i wypisuje t� o wi�kszej warto�ci bezwzgl�dnej.

#include <stdio.h>
#include <stdlib.h>
int bezw(int a){
    if(a < 0){
        a *= -1;
    }
    return a;
}
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    if(bezw(a) > bezw(b)){
        printf("%d", a);
    }
    else{
        printf("%d", b);
    }

    return 0;
}
