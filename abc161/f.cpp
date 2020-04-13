#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

ll N;
inline ll Pow(ll a) {
	ll res = a;
	while(N >= res) {
		res *= a;
		if(N % res != 0) {
			res /= a;
			break;
		}
	}
	if(N % res != 0)
		res /= a;
	return res;
}

int main(){
	cin >> N;
	if(N == 2) {
		cout << 1 << endl;
		return 0;
	}
	ll ans = 2;
	for(ll k=2;k*k<=N;k++) {
		if(N % k == 0) continue;
		if((N-1) % k == 0) {
			ans++;
			ll tmp = (N-1)/k;
			if(tmp == k) continue;
			ans++;
		}
	}
	for(ll k=2;k*k<=N;k++) {
		if(N % k == 0) {
			ll kk = Pow(k);
			if( (N/kk) % k == 1) {
				ans++;
			}
			ll nk = N/k;
			if(N % nk == 1) {
				ans++;
			}
		}
	}
	cout << ans << endl;
}
