#include <stdio.h> 

int main() {
    int n;

    while(scanf("%d",&n),n) {
        int a = 0, b = 0, c = 0;
        
        for (int i = 0; i < n; i++) {
            double t;
            scanf("%lf",&t);
            if(t < 0) a++;
            else if(t == 0) b++;
            else c++; 
        }

        printf("%d %d %d\n",a,b,c);
    }

    return 0;
}