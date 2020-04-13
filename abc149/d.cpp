#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int N, K, Point[3];
	cin >> N >> K >> Point[0] >> Point[2] >> Point[1];
	string T;
	cin >> T;
	vector<int> g(N);
	// グー: 0, パー: 1, チョキ: 2に
	for(int i=0;i<N;i++) {
		if(T[i] == 'r') g[i] = 0;
		if(T[i] == 'p') g[i] = 1;
		if(T[i] == 's') g[i] = 2;
	}

	int ans = 0;
	for(int i=0;i<K;i++) {
		// Kの剰余類においてdp(Kで割った余りが異なる集合とは依存関係がない)
		vector<vector<int>> dp(N/K + 5, vector<int>(3,0));
		int cnt = 0;
		for(int j=i;j<N;j+=K) {
			for(int k=0;k<3;k++) {
				// 今回出す手がk
				int plus = 0;
				// 勝つとき
				if(k == (g[j] + 1) % 3) plus += Point[k];
				// k以外の手のときにkを出せる
				dp[cnt+1][k] = max(dp[cnt][(k+1)%3],dp[cnt][(k+2)%3]) + plus;
			}
			cnt++;
		}
		ans += max(dp[cnt][0], max(dp[cnt][1], dp[cnt][2]));
	}
	cout << ans << endl;
}
