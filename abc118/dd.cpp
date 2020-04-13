#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int ms[] = {0, 2, 5, 5, 4, 5, 6, 3 ,7 ,6};

signed main() {
	int N, M;
	cin >> N >> M;
	vector<int> A(M);
	for(auto &a : A) cin >> a;
	// dp[i]: i個マッチ棒を使って最大の数
	vector<string> dp(N+1, "");
	dp[0] = "";
	for(int i=0;i<=N;i++) {
		if(i != 0 and dp[i] == "") continue;
		for(int j=0;j<M;j++) {
			string nxst = dp[i] + char('0' + A[j]);
			if(i + ms[A[j]] <= N) {
				if(dp[i+ms[A[j]]].size() < nxst.size()) {
					dp[i+ms[A[j]]] = nxst;
				} else if(dp[i+ms[A[j]]].size() == nxst.size()) {
					if(dp[i+ms[A[j]]] < nxst) {
						dp[i+ms[A[j]]] = nxst;
					}
				}
			}
		}
	}
	cout << dp[N] << endl;
}
