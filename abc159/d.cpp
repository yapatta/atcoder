#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main(){
	ll N;
	cin >> N;
	vector<ll> A(N);
	for(auto &a : A) cin >> a;
	map<ll,ll> mp;
	for(ll i=0;i<N;i++) {
		mp[A[i]]++;
	}
	ll sum = 0;
	for(auto &tmp : mp) {
		ll n = tmp.second;
		sum += n *(n-1)/2;
	}
	for(int i=0;i<N;i++) {
		ll ans = sum;
		ll now = A[i];
		ll n = mp[now];
		cout << ans - (n-1) << endl;
	}
}
