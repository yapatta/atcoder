#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll N, P;
	cin >> N >> P;
	string S;
	cin >> S;
	vector<vector<ll>> dp(2,vector<ll>(P, 0));
	ll ans = 0;
	for(int i=0;i<N-1;i++) {
		int now = S[i] - '0';
		int next = S[i+1] - '0';
		dp[0][now%P]++;
		ans += dp[0][0];
		for(int i=0;i<P;i++) cout << dp[0][i] << " ";
		cout << endl;
		for(int j=0;j<P;j++) {
			dp[1][(j*10+next)%P] += dp[0][j];
		}
		for(int j=0;j<P;j++) dp[0][j] = dp[1][j];
	}

	ans += dp[0][0];
	cout << ans << endl;
}
