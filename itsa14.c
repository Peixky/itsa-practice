#include <stdio.h>

int main() {
   int n;
   scanf("%d", &n);
   int ori = n;
   int reverse = 0;
   
   while (n > 0) {
      //從後存到前
      reverse = reverse * 10 + (n % 10);
      n /= 10;
   }

   if (ori == reverse)
      printf("YES\n");
   else
      printf("NO\n");

   return 0;
}
