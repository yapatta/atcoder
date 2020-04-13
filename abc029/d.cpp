#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	string S;
	cin >> S;
	N = S.size();

	// dp_equal[i][j]: Sと等しい数でi番目まで見たとき, j個1を持つ
	// dp_less[i][j] : S未満の数でi番目まで見たとき, j個1を持つ
	vector<vector<ll>> dp_equal(N+1, vector<ll>(N+1, 0)), dp_less(N+1, vector<ll>(N+1, 0));
	dp_equal[0][0] = 1;
	for(int i=1;i<=N;i++) {
		ll now = S[i-1] - '0';
		if(now == 1) {
			for(int j=1;j<=i;j++) dp_equal[i][j] = dp_equal[i-1][j-1];
		} else {
			for(int j=0;j<=i;j++) dp_equal[i][j] = dp_equal[i-1][j];
		}

		for(int j=0;j<=i;j++) {
			// dp_lessについて
			// そのまま
			dp_less[i][j] = dp_less[i-1][j] * 9;
			if(now > 1)	dp_less[i][j] += dp_equal[i-1][j] * (now - 1);
			else if(now == 1) dp_less[i][j] += dp_equal[i-1][j];
			// 一個増加
			if(j >= 1) {
				dp_less[i][j] += dp_less[i-1][j-1];
				if(now > 1) dp_less[i][j] += dp_equal[i-1][j-1];
			}
		}
	}
	ll ans = 0;
	for(int i=1;i<=N;i++) {
		ans += i * (dp_equal[N][i] + dp_less[N][i]);
	}
	cout << ans << endl;
}
