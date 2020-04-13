#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main() {
	int N;
	string S;
	cin >> N >> S;
	vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
	int ans = 0;
	for(int i=N-1;i>=0;i--) {
		for(int j=N-1;j>i;j--) {
			if(S[i] == S[j]) dp[i][j] = max(dp[i][j], dp[i+1][j+1] + 1);
			else dp[i][j] = 0;
			// 長さの最大はj - i
			ans = max(ans, min(j - i, dp[i][j]));
		}
	}
	cout << ans << endl;
}
