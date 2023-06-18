#include <stdio.h>

int is_leap(int year) {
	if(year%400==0 || (year%4==0&&year%100!=0)) {
		return 1;
	} else {
		return 0;
	}
}

int main () {
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	int year,month,day;
	while(scanf("%d/%d/%d",&year,&month,&day)!=EOF) {
		for(int i = 0; i < month -1; i++) {
			if(is_leap(year)) day+=b[i];
			else day+=a[i];
		}
		printf("%d\n",day);
	}
	return 0;
}