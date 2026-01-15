#include <stdio.h>

int main() {
   int row, col;
   while (scanf("%d %d", &row, &col) != EOF) {
      int a[100][100];
      for (int i = 0; i < row; i++) {
         for (int j = 0; j < col; j++) {
               scanf("%d", &a[i][j]);
         }
      }
      for (int j = 0; j < col; j++) {
         for (int i = 0; i < row; i++) {
               if (i != 0) printf(" ");
               printf("%d", a[i][j]);
         }
         printf("\n");
      }
   }
}
