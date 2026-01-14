#include <stdio.h>
#include <stdlib.h>
int main(){
   char operator;
   int a, b, c, d;
   int n;
   scanf("%d", &n);
   for(int i = 0; i < n; i++){
      scanf(" %c %d %d %d %d", &operator, &a, &b, &c, &d);
      int real;//實數
      int imag;//虛數
      switch(operator){
         case '+':
            real = a + c;
            imag = b + d;
            break;
         case '-':
            real = a - c;
            imag = b - d;
            break;
         case '*':
            real = a * c - b * d;
            imag = a * d + b * c;
            break;
         /*case '/':
            real = a / c;
            imag = b / d;
            break;*/
      }
      printf("%d %d\n", real, imag);
   }
   
}   
