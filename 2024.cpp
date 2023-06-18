#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check(char *s) {
	if (isalpha(s[0]) || s[0] == '_') {
		for (int i = 0; i < strlen(s); i++) {
			if (isalnum(s[i]) || s[i] == '_') {
			}
			else {
				return 0;
			}
		}
	}
	else {
		return 0;
	}
	return 1;
}
int main() {
	char a[64];
	int n, d;
	scanf("%d\n", &n);
	for(int i = 0; i < n; i++) {
		fgets(a,64,stdin);
// 		printf("%s",a);
		printf(check(a) ? "yes\n" : "no\n");
		
	}
}