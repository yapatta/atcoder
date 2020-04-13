#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N, Q;
	cin >> N;
	vector<ll> C(N);
	for(auto &c : C) cin >> c;
	cin >> Q;
	ll all = 0 , odd = 0;
	vector<ll> sell(N, 0);
	ll minv = 0, mini = 0;
	for(auto &c : C) {
		ifminv = min(minv, c);

	for(int i=0;i<Q;i++) {
		int q;
		cin >> q;
		if(q == 1) {
			int x;
			ll a;
			cin >> x >> a;
			x--;
			if(C[x] >= a) C[x] -= a;
			minv = min(C[x], minv);
		} else if(q == 2) {
			ll a;
			cin >> a;
			odd += a;
		} else if(q == 3) {
			ll a;
			cin >> a;
			all += a;
		}
	}
	for(int i=0;i<N;i++) {
		sell[i] += all;
		if(i%2==0) sell[i] += odd;
	}
	ll ans = 0;
	for(int i=0;i<N;i++) {
		ans += min(C[i], sell[i]);
	}
	cout << endl;
	cout << ans << endl;
} 
