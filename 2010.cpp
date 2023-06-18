#include <stdio.h> 

int main() {
	int a, b;
	while(scanf("%d%d",&a,&b) != EOF) {
	    int flag = 0;
		for(int i = a; i <= b; i++) {
			int q = (i/100)*(i/100)*(i/100);
			int w = (i/10%10)*(i/10%10)*(i/10%10);
			int r = (i%10)*(i%10)*(i%10);
			if(i == q+w+r) {
				printf(flag++ ? " %d" : "%d",i);
				
			} 
// 			if(i!= q+w+r&& i==b) printf("no");
		}
		printf(flag ? "\n" : "no\n");
	}

	return 0;
}