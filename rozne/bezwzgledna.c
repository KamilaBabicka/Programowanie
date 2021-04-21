//Napisz program ktory wczytuje liczbe calkowita n i wypisuje wartosc bezwzgledna z n.
//Nie uzywac funkcji wbudowanych. Uzyc samodzielnie zaimplementowanej funkcji //liczacej wartosc bezwzgledna.
int absolute(int n){
if(n<0)
return -1 * n;
return n;

}

int main()
{
int n;
scanf("%d",&n);
printf("%d", absolute(n));
return 0;
}
