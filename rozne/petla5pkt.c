//zadanie za 5 pkt ile jest liczb dwucyfrowych o dokladnie jednej cyfrze 7 w zapisie jest wzglednie pierwszych z liczba 100^2
#include <stdio.h>
#include <stdlib.h>
int main()
{​​​​​​​​
    int ilosc=0;
    int ile=0;
   for (int i=17;i<100;i+=10)
   {​​​​​​​​
       for(int j=2;j<i;j++)
       {​​​​​​​​
       if((i%j==0)&&(100%j==0))
       {​​​​​​​​
           ile++;
       }​​​​​​​​
       }​​​​​​​​
       if(ile!=0)
       {​​​​​​​​
           ile=0;
       }​​​​​​​​
       else if(i==77)
       {​​​​​​​​
           continue;
       }​​​​​​​​
       else{​​​​​​​​
        printf("%d\n",i);
        ile=0;
        ilosc++;
       }​​​​​​​​
   }​​​​​​​​
   for(int i=70;i<80;i++)
   {​​​​​​​​
       for(int j=2;j<i;j++)
       {​​​​​​​​
        if((i%j==0)&&(100%j==0))
        {​​​​​​​​
            ile++;
        }​​​​​​​​
       }​​​​​​​​
        if(ile!=0)
       {​​​​​​​​
           ile=0;
       }​​​​​​​​
        else if(i==77)
        {​​​​​​​​
            continue;
        }​​​​​​​​
       else{​​​​​​​​
        printf("%d\n",i);
        ile=0;
        ilosc++;
       }​​​​​​​​
   }​​​​​​​​
   printf("liczb jest %d",ilosc);
}​​​​​​​​


