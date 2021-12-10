#include <stdio.h>
#include <stdlib.h>
#define MinutesInHour 60


int main()
{
    int minutes, hour, rest;
    printf("Liczba minut      Liczba godzin\n");

    while (minutes <= 240)
        {
            hour = minutes / MinutesInHour;
            rest= minutes % MinutesInHour;
            printf("%d minut to          %d godzin/a i %d minut\n", minutes,hour,rest);
            minutes ++;
        }
    return 0;
}
