#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba, suma, licznik;
    liczba = 0;
    suma = 0;
    licznik = 0;
    printf("Podaj liczbe calkowita, ktora okresli ile kolejnych liczb naturalnych do siebie dodam\n");
    scanf ("%d", &liczba);

    while(licznik++ < liczba)
    {
        suma = suma + licznik;
        printf ("suma=%d\n", suma);
    }
 return 0;
}

