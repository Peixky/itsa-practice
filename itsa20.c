#include <stdio.h>
#include <string.h>

int main() {
   int N;
   scanf("%d", &N);
   while (N--) {
      char a[105], b[105];
      scanf("%s %s", a, b);

      int i = (int)strlen(a) - 1;
      int j = (int)strlen(b) - 1;

      int ten = 0;//十進位
      char result[110];
      int k = 0;

      while (i >= 0 || j >= 0 || ten) {
         int sum = ten;
         //字元換數字
         if (i >= 0){
            sum += a[i--] - '0';
         }
         if (j >= 0){
            sum += b[j--] - '0';
         } 
         //數字換字元
         result[k++] = (char)('0' + (sum % 10));
         ten = sum / 10;//看要不要進位
      }

      // 反向輸出
      for (int t = k - 1; t >= 0; t--){
         putchar(result[t]);
      }
      putchar('\n');
   }
}
