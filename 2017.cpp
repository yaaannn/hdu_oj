#include <stdio.h> 
#include <string.h>
int main() {
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		char a[10010];
		int cnt = 0;
		scanf("%s",a);
		for (int j = 0; j < strlen(a); j++) {
			if( a[j] >='0'&& a[j] <= '9') cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}