#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	double x1,x2,y1,y2;
	while(scanf("%lf%lf%lf%lf",&x1,&x2,&y1,&y2)!=EOF) {
		double d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
			printf("%.2lf\n", d);
	}
	return 0;
}