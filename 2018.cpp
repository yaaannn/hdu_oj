#include <stdio.h>

int main() {
    int n, i;
    int fab[55] = {1, 2, 3, };

    for (i = 3 ; i < 55 ; i++)
        fab[i] = fab[i - 1] + fab[i - 3];
    while (scanf("%d", &n), n) {
        printf("%d\n", fab[n - 1]);
    }

    return 0;
}