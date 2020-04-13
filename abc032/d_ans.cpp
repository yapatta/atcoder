#include <bits/stdc++.h>
using ll = long long;
const ll INF = 1e14;
using namespace std;

ll dp[205][200005];

int main() {
	ll N, W;
	cin >> N >> W;
	vector<ll> v(N),w(W);
	ll vmax = 0, wmax = 0;
	for(int i=0;i<N;i++) {
		cin >> v[i] >> w[i];
		if(vmax < v[i]) vmax = v[i];
		if(wmax < w[i]) wmax = w[i];
	}
	
	for(int i=0;i<=N;i++) {
		for(int j=0;j<=200005;j++) {
			dp[i][j] = INF;
		}
	}

	if(N <= 30) {
		cout << "atrfndsv" << endl;
	} else if(vmax > 1000) {
		// dp[i][j] = k,  j: w, k: v
		// 初期化
		for(int i=0;i<=N;i++) dp[i][0] = 0;
		for(int i=1;i<=N;i++) {
			for(int j=0;j<=W;j++) {
				dp[i][j] = min(dp[i][j], dp[i-1][j]);
				if(j >= w[i-1]) dp[i][j] = min(dp[i][j], dp[i-1][j-w[i-1] + v[i-1]]);
			}
		}
		cout << dp[N][W] << endl;
	} else {
		// dp[i][j] = k,  j: v, k: w
		// 初期化
		for(int i=0;i<=N;i++) dp[i][0] = 0;
		for(int i=1;i<=N;i++) {
			for(int j=0;j<=200000;j++) {
				dp[i][j] = min(dp[i][j], dp[i-1][j]);
				if(j >= v[i-1]) dp[i][j] = min(dp[i][j], dp[i-1][j-v[i-1]] + w[i-1]);
			}
		}
		ll ans = INF;
		for(int i=0;i<=200000;i++)
			if(ans > dp[N][i])
				ans = dp[N][i];

		cout << ans << endl;
	}
}
