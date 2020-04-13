#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	ll H;
	cin >> N >> H;
	vector<ll> a(N), b(N);
	for(int i=0;i<N;i++) {
		cin >> a[i] >> b[i];
	}
	sort(a.rbegin(), a.rend());
	sort(b.rbegin(), b.rend());
	ll ans = LLONG_MAX;
	vector<ll> tb(N+1, 0);
	for(int i=1;i<=N;i++)
		tb[i] = tb[i-1] + b[i-1];
	// 刀をi本投げる
	for(int i=0;i<=N;i++) {
		if(H  >= tb[i]) {
			ans = min(ans, (H - tb[i] + a[0] - 1) / a[0] + i);
		} else {
			ans = min(ans, (ll)i);
		}
	}
	cout << ans << endl;
}
