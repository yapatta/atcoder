#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()
const ll MOD = 2019;

int main(){
	string S;
	cin >> S;
	int N = (int)S.size();
	vector<ll> ama(N+1), ten(N+1);
	
	// 0の個数1eiの2019で割った余り
	ten[0] = 1;
	for(int i=1;i<=N;i++) {
		ten[i] = (ten[i-1] * 10) % MOD;
	}

	vector<ll> memo(MOD+5, 0);
	ama[N] = 0;
	memo[ama[N]]++;
	for(int i=N-1;i>=0;i--) {
		int keta = (int)(S[i]-'0');
		ama[i] = (ama[i+1] + keta * ten[N-1-i]) % MOD;
		memo[ama[i]]++;
	}

	ll ans = 0;
	for(int i=0;i<MOD;i++) {
		ans += (memo[i] * (memo[i] - 1) / 2LL);
	}

	cout << ans << endl;
}
