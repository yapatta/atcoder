#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define All(x) (x).begin(),(x).end()
using namespace std;

signed main() {
	ll N,K;
	cin >> N >> K;
	vector<ll> A(N);

	vector<ll> bitnum(63, 0);
	for(auto &a : A) {
		cin >> a;
		for(ll j=0;j<63;j++) {
			if(a & (1LL << j)) bitnum[j]++;
		}
	}

	vector<ll> one;
	ll cnt = 0;
	while(cnt < 63) {
		if(K & (1LL << cnt)) {
			one.push_back(cnt); 
		}
		cnt++;
	}

	ll ans = 0;
	// 0で合成したとき
	for(ll i=0;i<N;i++)
		ans += A[i];

	for(ll j=one.size()-1;j>=0;j--) {
		ll tmp_ans = 0;
		ll key = one[j];
		for(ll i=62;i>=key+1;i--) {
			// if(K & (1LL<<i)) { // 1LLとしてLLONG型の整数をbitshiftしないといけない
			if(K & (1LL << i)) {
				tmp_ans += ((1LL<<i) * max(bitnum[i], N - bitnum[i]));
			} else {
				tmp_ans += ((1LL<<i) * bitnum[i]);
			}
		}
		tmp_ans += ((1LL<<key) * bitnum[key]);
		for(ll i=key-1;i>=0;i--) {
			tmp_ans += ((1LL<<i) * max(N - bitnum[i], bitnum[i]));
		}
		ans = max(ans, tmp_ans);
	}
	cout << ans << endl;
}
