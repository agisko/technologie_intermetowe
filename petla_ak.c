#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   // deklaracja zmiennych
   int i;
   printf("wyswietlanie znakow a-k w kolejnosci rosnacej\n");
   // iterowanie w kolejnosci rosnacej
   for(i = (int)'a'; i <= (int)'k'; i++)
   {
      printf("%c -> kod: %d(dec), 0x%x\n", (char)i, i, i);
   }

   printf("wyswietlanie znakow a-k w kolejnosci malejacej\n");
   // iterowanie w kolejnosci malejacej
   for(i = (int)'k'; i >= (int)'a'; i--)
   {
      printf("%c -> kod: %d(dec), 0x%x\n", (char)i, i, i);
   }
     
   system("PAUSE");	
   return 0;
}
