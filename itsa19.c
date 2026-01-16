#include <stdio.h>

int main() {
   int n;
   scanf("%d", &n);

   int cnt[25] = {0};

   for (int i = 0; i < n; i++) {
      int s, d;
      scanf("%d %d", &s, &d);
      for (int t = s; t < d; t++) {
         cnt[t]++;
      }
   }

   int ans = 0;
   for (int t = 1; t <= 24; t++) {
      if (cnt[t] > ans){
         ans = cnt[t];
      }
   }

   printf("%d\n", ans);
}
