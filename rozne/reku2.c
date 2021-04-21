//Napisz funkcje rekurencyjna f(n,0)= n ,
//f(n,m)=f(m,n) ,  n<m
//f(n,m) = f(n-1,m)+f(n,m-1)+n-m , n>=m>=0
#include <stdio.h>
#include <stdlib.h>


int fun(unsigned int n,unsigned int m)
{
if(m==0)
{
return n;
}
else if((m>0)&&(n>=m))
{
return (n-m)+fun(n-1,m)+fun(n,m-1);
}
else
{
return fun(m,n);
}
}


int main()
{
int n,m;
scanf("%d %d",&n,&m);
printf("%d",fun(n,m));
return 0;
}
