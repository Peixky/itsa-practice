#include <stdio.h>

int main(){
    int h1, h2;
    int m1, m2;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    int sum = (h2 - h1) * 60  - m1 + m2;
    int half = sum / 30;
    int cost = 0;
    if(half < 4){
        cost = half * 30;
    }else if(half >= 4 && half <= 8){
        cost += 4 * 30;
        half -= 4;
        cost += half * 40;
    }else if(half > 8){
        cost += 4 * 30;
        half -= 4;
        cost += 4 * 40;
        half -= 4;
        cost += half * 60;
    }
    printf("%d\n", cost);
}
