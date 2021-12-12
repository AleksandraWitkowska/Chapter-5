#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, licznik, podanaLiczba;
   int sumaLiczb = 0;

   printf ("Ile liczb chcesz do siebie dodac?\n");
   scanf ("%d", &n);
   printf ("Podaj teraz %d liczb, ktore zsumuje:\n", n);

    for (licznik = 0; licznik < n; licznik++)
       { scanf("%d", &podanaLiczba);
         sumaLiczb = sumaLiczb + podanaLiczba;
       }

   printf ("Suma tych liczb to %d\n", sumaLiczb);
    return 0;
}
