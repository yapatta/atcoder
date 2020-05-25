#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<ll>> memo;
vector<vector<ll>> edge;

enum Color {
	BLACK, WHITE
};

const ll MOD = 1e9+7;

ll solve(ll now, Color c, ll pre) {
	if(memo[now][c] != -1) {
		return memo[now][c];
	}

	ll result = 1;
	for(ll next : edge[now]) {
		if(next == pre) {
			continue;
		}

		if(c == BLACK) {
			// 次は白
			result *= solve(next, WHITE, now);
			result %= MOD;
		} else {
			// 白or黒
			result *= (solve(next, WHITE, now) + solve(next, BLACK, now)) % MOD;
			result %= MOD;

		}
	}
	return memo[now][c] = result;
}


signed main(void) {
	ll N;
	cin >> N;
	memo.resize(N,vector<ll>(2,-1));
	edge.resize(N);
	for(ll i=0;i<N-1;i++) {
		ll a, b;
		cin >> a >> b;
		a--, b--;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	cout << (solve(0,BLACK,-1) + solve(0,WHITE,-1)) % MOD << endl;
}
