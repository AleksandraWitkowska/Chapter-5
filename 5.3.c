#include <stdio.h>
#include <stdlib.h>
#define DaysInWeek 7
int main()
{ int daysFromUser, weeks, days;
printf ("Podaj liczbe dni, przelicze je na tygodnie:\n");
scanf ("%d", &daysFromUser);
weeks = daysFromUser/ DaysInWeek;
days = daysFromUser % DaysInWeek;
printf ("Podana przez Ciebie liczba dni to %d tygodni/e i %d dni\n", weeks, days);

return 0;
}
