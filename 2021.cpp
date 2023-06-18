#include <stdio.h>

int main() {
	int n;
	int m[6] = {100,50,10,5,2,1};

	while(scanf("%d",&n), n) {
		int cnt = 0;
		for(int i = 0; i < n; i++) {
			int a;
			scanf("%d",&a);
			for(int j = 0; j < 6; j++) {
				// if(a >= m[j]) {
				// 	a -= m[j];
				// 	cnt ++;
			 //   }
			    cnt += a/m[j];
			    a %= m[j];
		    }
	    }
	    printf("%d\n",cnt);
    }
    return 0;
}