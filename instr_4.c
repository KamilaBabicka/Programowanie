
//Napisz program, który wczytuje ze standardowego wejœcia dwie liczby ca³kowite
//i wypisuje t¹ o wiêkszej wartoœci bezwzglêdnej.

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
