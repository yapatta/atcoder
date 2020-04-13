#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr int INF = 1e9+7;

int main(){
	int H, N;
	cin >> H >> N;
	vector<int> A(N), B(N);
	for(int i=0;i<N;i++) cin >> A[i] >> B[i];
	vector<int> dp(H+5,INF);
	dp[H] = 0;
	for(int i=H;i>=0;i--) {
		for(int j=0;j<N;j++) {
			if(i >= A[j]) dp[i-A[j]] = min(dp[i-A[j]], dp[i] + B[j]);
			else if(i < A[j]) dp[0] = min(dp[0], dp[i] + B[j]);
		}
	}
	cout << dp[0] << endl;
}
