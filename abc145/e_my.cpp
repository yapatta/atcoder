#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N, T;
	cin >> N >> T;
	vector<int> A(N), B(N);
	int maxa = 0;
	for(int i=0;i<N;i++) {
		cin >> A[i] >> B[i];
	}

	vector<vector<int>> dp(N + 1, vector<int>(T + 1, 0)), pd(N + 2, vector<int>(T + 1, 0));
	// dp[i][j] : 1~i番目の料理でj分以内に完食できる美味しさの合計
	// pd[i][j] : i~N番目の料理でj分以内で完食できる美味しさの合計
	
	for(int i=1;i<=N;i++) {
		for(int j=1;j<=T;j++) {
			dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			if(j >= A[i-1]) dp[i][j] = max(dp[i][j], dp[i-1][j - A[i-1]] + B[i-1]);
		}
	}

	for(int i=N;i>=1;i--) {
		for(int j=1;j<=T;j++) {
			pd[i][j] = max(pd[i+1][j], pd[i][j-1]);
			if(j >= A[i-1]) pd[i][j] = max(pd[i][j], pd[i+1][j - A[i-1]] + B[i-1]);
		}
	}

	vector<int> ans(N+1, 0);
	// i番目以外の料理でT - 1分以内で食べる最大値
	for(int i=1;i<=N;i++) {
		for(int j=0;j<T;j++) {
			ans[i] = max( ans[i], dp[i-1][j] + pd[i+1][T-1-j]);
		}
		ans[i] += B[i-1];
	}
	cout << *max_element(ans.begin(), ans.end()) << endl;
}
