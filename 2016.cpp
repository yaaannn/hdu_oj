#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main () {
	int n;
	int a[100];
	while(scanf("%d",&n),n) {
		
		int m = 0;
		for(int i = 0; i < n; i++ ){
			scanf("%d",&a[i]);
			if(a[i] < a[m]) m = i;
		}
		int c =1,b=2;
		swap(&a[m],&a[0]);
		for(int i = 0; i < n; i++ ){
			printf("%d%c", a[i], (i < n - 1 ? ' ' : '\n'));
		}
	}
}