#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    while(b != 0){
        int r = a % b;//算餘數
        a = b;//把除數變成新的被除數
        b = r;//把餘數變成新的除數
    }

    printf("%d\n", a);
    return 0;
}
