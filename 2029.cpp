#include <stdio.h>
#include <string.h>

int main() {
    
    int n;
    scanf("%d\n",&n);
    while(n--) {
        char a[110];
        int flag = 0;
        scanf("%s",a);
        int len = strlen(a);
        int n = len/2;
        for(int i = 0; i < n; i++) {
            if(a[i] == a[len - i - 1]) flag = 1;
            else flag = 0;
        }
        printf(flag ? "yes\n" : "no\n");
    }
}