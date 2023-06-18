#include <stdio.h> 

int is_prime(int n) {
	int flag = 1;
	for(int i = 2; i < n; i++) {
		if(n % i == 0) flag = 0;
	}

	return flag;
}

int main() {
	int x, y;

	while(scanf("%d%d",&x, &y)) {
		if(!x&&!y) break;
		int flag = 1;
		for(int i = x; i <= y; i++) {
			if(!is_prime( i*i+i+41)) {
				flag = 0;
				break;
			}
		}

		if(flag) printf("OK\n");
		else printf("Sorry\n");
	}

	return 0;
} 