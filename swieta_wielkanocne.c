#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
   // deklaracje zmiennych
   int rok = 0, a, b, c, d, e, f, g, h, i, k, l, m, p, dzien, miesiac;
   //
   printf("\npodaj rok: ");
   scanf("%d", &rok);
   printf("wybrany rok: %d\n", rok);
   //
   // krok 1
   a = rok % 19;
   // krok 2
   b = rok / 100;
   // krok 3
   c = rok % 100;
   // krok 4
   d = b / 4;
   // krok 5
   e = b % 4;
   // krok 6
   f = (b + 8) / 25;
   // krok 7
   g = (b - f + 1) / 3;
   // krok 8
   h = (19 * a + b - d - g + 15) % 30;
   // krok 9
   i = c / 4;
   // krok 10
   k = c % 4;
   // krok 11
   l = (32 + 2 * e + 2 * i - h - k) % 7;
   // krok 12
   m = (a + 11 * h + 22 * l) / 451;
   // krok 13
   p = (h + l - 7 * m + 114) % 31;
   // krok 14
   dzien = p + 1;
   // krok 15
   miesiac = (h + l - 7 * m + 114) / 31;
   printf("Wielkanoc: miesiac: %d, dzien: %d\n", miesiac, dzien);
   system("PAUSE");	
   return 0;
}
