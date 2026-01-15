#include <stdio.h>
#include<stdlib.h>

int main() {
   int n, p;
   double r;
   scanf("%lf %d %d", &r, &n, &p);
   double total = 0.0;
   for(int i = 0; i < n; i++){
      total += p;
      total *= (1 + r);
   }
   printf("%d\n", (int)total);
}
