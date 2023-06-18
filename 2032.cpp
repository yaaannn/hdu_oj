#include <stdio.h>
#include <string.h>
int main() {
    int a[110][110];
    memset(a,0,sizeof(a));
    
    int n;
    while(scanf("%d",&n) != EOF) {
        for(int i = 0; i < n; i++) {
            a[i][0] = 1;
            for(int j = 0; j <= i; j++) {
                if(j == i) a[i][j] = 1;
                if(i > 1 && j >=1) 
                    a[i][j] = a[i-1][j] + a[i-1][j-1];
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

