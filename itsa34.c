#include <stdio.h>

int main() {
   int height, gender;

   while (scanf("%d %d", &height, &gender) != EOF) {
      double weight;

      if (gender == 1) {          
         weight = (height - 80) * 0.7;
      } else if (gender == 2) {   
         weight = (height - 70) * 0.6;
      }

      printf("%.1f\n", weight);
   }
}
