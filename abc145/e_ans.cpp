#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, T, i, j;
	scanf("%d%d", &N, &T);
	vector<int> A(N + 2), B(N + 2);
	for(i = 1; i <= N; i++){
		scanf("%d%d", &A[i], &B[i]);
	}
	vector<vector<int>> dp(N + 2, vector<int>(T + 1, 0));
	vector<vector<int>> pd(N + 2, vector<int>(T + 1, 0));
	for(i = 1; i <= N; i++){
		for(j = 1; j <= T; j++){
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			if(j >= A[i]){
				dp[i][j] = max(dp[i][j], dp[i - 1][j - A[i]] + B[i]);
			}
		}
		for(i = N; i > 0; i--){
			for(j = 1; j <= T; j++){
				pd[i][j] = max(pd[i + 1][j], pd[i][j - 1]);
				if(j >= A[i]){
					pd[i][j] = max(pd[i][j], pd[i + 1][j - A[i]] + B[i]);
				}
			}
		}
		int ans = 0;
		for(i = 1; i <= N; i++){
			for(j = 0; j < T; j++){
				ans = max(ans, B[i] + dp[i - 1][j] + pd[i + 1][T - 1 - j]);
			}
		}
		printf("%d\n", ans);
		return 0;
	}
