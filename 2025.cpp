#include <stdio.h>

int main() {
    char t[128];
    char max;
    int i;

    while (gets(t)) {
        for (max = i = 0 ; t[i] ; i++) {
            if (t[i] > max)
                max = t[i];
        }
        for (i = 0 ; t[i] ; i++) {
            putchar(t[i]);
            if (t[i] == max)
                printf("%s", "(max)");
        }
        puts("");
    }

    return 0;
}
