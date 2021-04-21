#include <stdio.h>
#include <stdlib.h>
//rozwiazanie uklady sposobem macierzowym

int main()
{
    float a,b,c,d,e,f;
    scanf("%f%f%f%f%f%f", &a,&b,&c,&d,&e,&f);
    float w = a*e-d*b, wx = c*e - b*f, wy = a*f-c*d;
    if(w==0)
        if(wx==0 && wy==0)
            printf("Nieoznaczony");
        else
            printf("Sprzeczny");
    else{
        printf("x= %.2f", wx/w);
        printf("y= %.2f", wy/w);
    }

    return 0;
}
