#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n , k;
	scanf("%lld %lld", &n, &k);
	double ans = (1 + 3*(n-1) + 6*(k-1)*(n-k))/(double)(n*n*n);
	printf("%.10lf\n", ans);
}
