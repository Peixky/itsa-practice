#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int *a = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    // 第一個元素直接輸出
    printf("%d", a[0]);

    // 後面元素輸出相鄰差值
    for (int i = 1; i < N; i++) {
        printf(" %d", a[i] - a[i - 1]);
    }

    printf("\n");
    free(a);
    return 0;
}
