#include <stdio.h>
typedef long long ll;
ll gcd(ll a, ll b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return a * b / gcd(a,b);
}

int main() {
    int n;
    int a;
    while(scanf("%d", &n) != EOF) {
        ll a;
        ll res = 1;
        for(int i = 0; i < n; i++) {
            scanf("%lld",&a);
            res = lcm(res, a);
        }
        printf("%lld\n",res);
    }
    return 0;
}