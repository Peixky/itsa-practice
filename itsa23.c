#include <stdio.h>
#include <stdlib.h>
int main(){
   int N;
   int a1, a2, a3;
   scanf("%d,%d,%d,%d", &N, &a1, &a2, &a3);
   int total = a1 * 15 + a2 * 20 + a3 * 30;
   if(N < total){
      printf("0\n");
      return 0;
   }
   int result = N - total;
   int one, five, fifty;
   fifty = result / 50;
   result -= 50 * fifty;
   five = result / 5;
   result -= 5 * five;
   one = result / 1;
   result -= 1 * one;
   printf("%d,%d,%d\n", one, five, fifty);
}   
