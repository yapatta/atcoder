#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<pair<ll,ll>>> lrc(m);
	for(int i=0;i<m;i++) {
		ll l, r, c;
		cin >> l >> r >> c;
		l--,r--;
		lrc[r].push_back(make_pair(l,r));
	}
	vector<ll> dp(n+1,INF);
	dp[0] = 0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<lrc[i].size();j++) {
			dp[i] = min(dp[i], +c[i]);
		}
	}
	cout << dp[n-1] << endl;
}
