#include <stdio.h>

int main() {
	int n;

	scanf("%d",&n);

	for(int i = 0; i < n; i++) {
		int a;
		double sum = 0;
		scanf("%d",&a);
		for(int j = 1; j <= a; j++) {
		double 	x = 1.0/j;
			if(j%2==0)
			    x = -x;
			sum += x;
			
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}