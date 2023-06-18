#include <stdio.h> 

int main() {
	int n;
	while(scanf("%d",&n)!=EOF) {
		int t,v = 1;
		for(int i=0;i<n;i++) {
			scanf("%d",&t);
			if(t & 1) v*=t;
		}
		printf("%d\n",v);
	}
	return 0;
}