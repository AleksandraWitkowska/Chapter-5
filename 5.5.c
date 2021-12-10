#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba, sumaKwadratow, licznik;
    liczba = 0;
    sumaKwadratow = 0;
    licznik = 0;
    printf("Podaj liczbe calkowita, ktora okresli ile kolejnych liczb naturalnych podniesionych do kwadratu do siebie dodam\n");
    scanf ("%d", &liczba);

    while(licznik < liczba)
    {
        sumaKwadratow = sumaKwadratow + ++licznik * licznik;
    }
    printf ("Suma kwadratow %d liczb jest rowna %d\n",liczba, sumaKwadratow);

    while()

 return 0;
}
