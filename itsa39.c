#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int listening, reading, speaking;
        scanf("%d %d %d", &listening, &reading, &speaking);

        int sum = listening + reading + speaking;

        int failCnt = 0;
        if (listening < 60) failCnt++;
        if (reading < 60) failCnt++;
        if (speaking < 60) failCnt++;

        // 三科都及格
        if (failCnt == 0) {
            printf("P\n");
        }
        //一科不及格
        else if (failCnt == 1) {
            if (sum > 220){
               printf("P\n");
            }else{
               printf("M\n");   
            }
        }
        //兩科不及格
        else if (failCnt == 2) {
            if(listening >= 80 || reading >= 80 || speaking >= 80){
               printf("M\n");
            }else{
               printf("F\n");
            } 
        }else{
            printf("F\n");
        }
    }

    return 0;
}
