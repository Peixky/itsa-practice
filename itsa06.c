#include <stdio.h>
#include <stdlib.h>
int main(){
   int n;
   int flag = 0;
   scanf("%d", &n);
   for(int i = 2; i * i <= n; i++){
    if(n % i == 0){
        flag = 1;
        break;
    }
   }
   if(flag){
    printf("NO\n");
   }else{
    printf("YES\n");
   }
}
