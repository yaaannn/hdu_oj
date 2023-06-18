#include <stdio.h>

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main () {
	int a, b;

	while(scanf("%d %d",&a,&b) != EOF) {
		int sum1 = 0, sum2 = 0;
		if(a > b) swap(&a,&b);
		for(int i = a; i<=b; i++) {
			if(i%2 == 0) {
				sum1 += (i*i);
			} else {
				sum2 += (i*i*i);
			}
		}
		printf("%d %d\n",sum1,sum2);
		
	}
	return 0;
}