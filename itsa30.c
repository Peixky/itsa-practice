#include <stdio.h>

int main() {
   int m, d;
   scanf("%d %d", &m, &d);

   if ((m == 1 && d >= 21) || (m == 2 && d <= 18))
      printf("Aquarius");
   else if ((m == 2 && d >= 19) || (m == 3 && d <= 20))
      printf("Pisces");
   else if ((m == 3 && d >= 21) || (m == 4 && d <= 20))
      printf("Aries");
   else if ((m == 4 && d >= 21) || (m == 5 && d <= 21))
      printf("Taurus");
   else if ((m == 5 && d >= 22) || (m == 6 && d <= 21))
      printf("Gemini");
   else if ((m == 6 && d >= 22) || (m == 7 && d <= 22))
      printf("Cancer");
   else if ((m == 7 && d >= 23) || (m == 8 && d <= 23))
      printf("Leo");
   else if ((m == 8 && d >= 24) || (m == 9 && d <= 23))
      printf("Virgo");
   else if ((m == 9 && d >= 24) || (m == 10 && d <= 23))
      printf("Libra");
   else if ((m == 10 && d >= 24) || (m == 11 && d <= 22))
      printf("Scorpio");
   else if ((m == 11 && d >= 23) || (m == 12 && d <= 21))
      printf("Sagittarius");
   else if ((m == 12 && d >= 22) || (m == 1 && d <= 20))
      printf("Capricorn");

}
