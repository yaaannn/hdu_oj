#include <stdio.h>


int main() {

	int n;
	while(scanf("%d",&n) != EOF) {
        int min, max;
        int x,y;
		scanf("%d",&x);
		min = max = x;
		for(int i = 1; i < n; i++) {
			scanf("%d",&y);
			x += y;
			if(y > max) max = y;
			if(y < min) min = y;
		}
		printf("%.2lf\n",(x - min - max) / (n - 2.0));
	}
}
