//Rekurencyjnie n-ty wyraz ciagu fibonanciego
#include <stdio.h>
#include <stdlib.h>

int fib(unsigned int n)
{
if(n<=2)
return 1;
else
{

 }

return fib(n-2)+fib(n-1);
}


int main()
{
int n;
scanf("%d",&n);
printf("%d",fib(n));
}
