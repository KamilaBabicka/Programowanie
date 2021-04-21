//Napisz program ktory wczytuje nieujemna liczbe calkowita n i wypisuje wartosc 2^n.
//Nie uzywac funkcji wbudowanych. Uzyc samodzielnie zaimplementowanej funkcji
//liczacej wartosc 2^n.
int func(int x) {
int result = 2;
for(int i = 0; i < x; i++) {
result *= 2;
}
return result;
}

int main()
{
int n;
scanf("%d", &n);
printf("%d",func(n));
return 0;
}
