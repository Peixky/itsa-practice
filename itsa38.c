#include <stdio.h>
#include <string.h>

int main() {
   int electric;
   scanf("%d", &electric);
   int temp = electric;
   double summer = 0.0;
   double nonsummer = 0.0;
   if (temp > 120) {
      summer += 120 * 2.10;
      nonsummer += 120 * 2.10;
      temp -= 120;
   } else {
      summer += temp * 2.10;
      nonsummer += temp * 2.10;
      temp = 0;
   }
   //121~330
   if (temp > 0) {
      if (temp > 210) {
         summer += 210 * 3.02;
         nonsummer += 210 * 2.68;
         temp -= 210;
      } else {
         summer += temp * 3.02;
         nonsummer += temp * 2.68;
         temp = 0;
      }
   }
   //331~500
   if (temp > 0) {
      if (temp > 170) {
         summer += 170 * 4.39;
         nonsummer += 170 * 3.61;
         temp -= 170;
      } else {
         summer += temp * 4.39;
         nonsummer += temp * 3.61;
         temp = 0;
      }
   }
   //501~700 
   if (temp > 0) {
      if (temp > 200) {
         summer += 200 * 4.97;
         nonsummer += 200 * 4.01;
         temp -= 200;
      } else {
         summer += temp * 4.97;
         nonsummer += temp * 4.01;
         temp = 0;
      }
   }
   
   if (temp > 0) {
      summer += temp * 5.63;
      nonsummer += temp * 4.50;
   }
   printf("Summer months:%.2f\n", summer);
   printf("Non-Summer months:%.2f\n", nonsummer);
}
