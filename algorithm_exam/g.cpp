#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll N;
vector<vector<ll>> A;

ll th[11];
ll three(ll cnt) {
	if(cnt == N) {
		ll a = 0, b = 0, c = 0;
		vector<ll> aa, bb, cc;
		for(ll i=0;i<N;i++) {
			if(th[i] == 1) aa.push_back(i);
			if(th[i] == 2) bb.push_back(i);
			if(th[i] == 3) cc.push_back(i);
		}
		for(ll i=0;i<aa.size();i++) {
			for(ll j=i+1;j<aa.size();j++) {
				a += A[aa[i]][aa[j]];
			}
		}
		for(ll i=0;i<bb.size();i++) {
			for(ll j=i+1;j<bb.size();j++) {
				b += A[bb[i]][bb[j]];
			}
		}
		for(ll i=0;i<cc.size();i++) {
			for(ll j=i+1;j<cc.size();j++) {
				c += A[cc[i]][cc[j]];
			}
		}
		return a + b + c;
	}
	th[cnt] = 1;
	ll x = three(cnt+1);
	th[cnt] = 2;
	ll y = three(cnt+1);
	th[cnt] = 3;
	ll z = three(cnt+1);
	th[cnt] = 0;
	return max(x, max(y, z));
}
signed main(){
	cin >> N;
	A = vector<vector<ll>>(N, vector<ll>(N, 0));
	for(ll i=0;i<N;i++) {
		for(ll j=i+1;j<N;j++) {
			ll a;
			cin >> a;
			A[i][j] = a;
			A[j][i] = a;
		}
	}
	ll ans = INT_MIN;
	for(ll i=0;i<N;i++) th[i] = 0;
	ans = max(ans, three(0));
	cout << ans << endl;
}
