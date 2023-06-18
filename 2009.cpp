#include <stdio.h> 
#include <math.h>
int main() {
	double n; 
	int m;
	while(scanf("%lf%d",&n,&m) != EOF) {
		double sum = 0;
		for(int i = 0; i < m; i++, n = sqrt(n)) {
			sum += n;
		}
		printf("%.2lf\n",sum);
	} 

	return 0;
}