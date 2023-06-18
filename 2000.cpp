#include <iostream>
#include<algorithm>
using namespace std;



int main() {
	char a[4];
	while(cin >> a) {
		if(a[0] > a[1]) swap(a[0],a[1]);
		if(a[0] > a[2]) swap(a[0],a[2]);
		if(a[1] > a[2]) swap(a[1],a[2]);
 	    cout << a[0] <<" " << a[1] << " " << a[2] <<endl;
 	}
 	return 0;
}