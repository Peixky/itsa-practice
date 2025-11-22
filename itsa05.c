#include <stdio.h>
#include <stdlib.h>
int main(){
   int dec;
   int binary[8];
   int i = 7;
   scanf("%d", &dec);
   if(dec >= 0){
        while(dec > 0){
            binary[i] = dec % 2;
            dec /= 2;
            i--;
        }
        for(int j = 0; j <= i; j++){
            binary[j] = 0;
        }
   }else{
        dec = abs(dec);
        while(dec > 0){
            binary[i] = !(dec % 2);
            dec /= 2;
            i--;
        }
        for(int j = 0; j <= i; j++){
            binary[j] = 1;
        }
        int k = 7;
        int add = 0;
        while(add != 1){
            add = binary[k] + 1;
            if(add != 1){
                binary[k] = 0;
                k--;
            }
        }
        binary[k] = 1;
   }
   for(int j = 0; j < 8; j++){
        printf("%d", binary[j]);
    }
}
