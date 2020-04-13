#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_N = 3005;
const int MAX_T = 3005;
const int INF = 1e9+7;
int n,t;
pair<int,int> ab[MAX_N];
int dp[MAX_N][MAX_T];

bool comp(pair<int,int> a, pair<int,int> b) {
	if(a.second == b.second) {
		return a.first < b.first;
	}else{
		return a.second < b.second;
	}
}

int main(){
	cin >> n >> t;
	for(int i=0;i<=n;i++) {
		for(int j=0;j<=t;j++) {
			dp[i][j] = -INF;
		}
	}
	for(int i=0;i<n;i++) {
		int a,b;
		cin >> a >> b;
		ab[i] = make_pair(a,b);
	}
	sort(ab, ab+n, comp);
	// dp[n][w]: 何個まで見たか, 重さ
	for(int i=0;i<=n;i++) dp[i][0] = 0;
	for(int i=1;i<=n;i++) {
		for(int j=0;j<=t;j++) {
			dp[i][j] = max(dp[i][j], dp[i-1][j]);
			if(j >= ab[i-1].first) {
				dp[i][j] = max(dp[i][j], dp[i-1][j-ab[i-1].first] + ab[i-1].second);
			}
			cout << dp[i][j] << ((j==t) ?"\n":" ");
		}
	}
	// 何を取ったかわかれば、取っていない中での価値最大を最後に選べばいいことがわかる
	int ans = dp[n][t];
	for(int j=0;j<t;j++) {
		for(int i=n;i>=1;i--) {
			if(dp[n][j] != dp[i-1][j-ab[i-1].first] + ab[i-1].second) {
				ans = max(ans, dp[n][j] + ab[i-1].second);
				break;
			}
		}
		ans = max(ans, dp[n][j]);
	}
	cout << ans << endl;
}
