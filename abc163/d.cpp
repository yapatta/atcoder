#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()
const ll MOD = 1e9+7;

int main(){
	ll N, K;
	cin >> N >> K;
	ll left = 0, right = 0;
	ll ans = 0;
	for(ll i=0;i<=N;i++) {
		left += i;
		right += (N-i);
		if(i >= K - 1) {
			ans += (right - left + 1);
			ans %= MOD;
		}
	}
	cout << ans << endl;
}
