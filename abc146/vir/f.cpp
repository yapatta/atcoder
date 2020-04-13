#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9+7;

int main() {
	ll n, m;
	string s;
	cin >> n >> m;
	cin >> s;
	if(s[0]=='1') {
		cout << -1 << endl;
		return 0;
	}

	vector<int> dp(n+10, INF);
	dp[0] = 0;
	for(int i=1;i<=n;i++) {
		if(s[i]=='1') continue;
		for(int p=1;p<=6;p++) {
			if(i-p>=0) dp[i] = min(dp[i], dp[i-p]+1);
		}
	}
	if(dp[n]==INF) cout << -1 << endl;
	else cout << dp[n] << endl;
}
