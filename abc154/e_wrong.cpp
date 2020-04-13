#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string S;
	int K;
	cin >> S >> K;
	int N = S.size();
	vector<vector<ll>> dp_less(N+1, vector<ll>(K+1, 0));
	vector<vector<ll>> dp_eq(N+1, vector<ll>(K+1, 0));
	vector<ll> zero(N+1, 1);

	vector<int> A(N+1, 0);
	for(int i=1;i<=N;i++) A[i] = S[i-1] - '0';

	// 初期化
	dp_less[1][0] = A[1] - 1;
	dp_eq[1][0] = 1;
	zero[1] = 1;

	for(int i=2;i<=N;i++) {
		// j = 0について
		if(A[i] != 0) dp_eq[i][0] = dp_eq[i-1][0];
		// +1は0を指す
		dp_less[i][0] = 9 * dp_less[i-1][0];
		dp_less[i][0] += 9 * zero[i-1];
		for(int j=1;j<=K;j++) {
			// dp_eqからdp_eqに
			if(A[i] == 0) dp_eq[i][j] = dp_eq[i-1][j-1];
			else dp_eq[i][j] = dp_eq[i-1][j];
			// dp_lessからdp_lessに
			dp_less[i][j] += 9 * dp_less[i-1][j] + dp_less[i-1][j-1];
			// dp_eqからdp_lessに
			if(A[i] > 0) dp_less[i][j] += dp_eq[i-1][j-1] + (A[i] - 1) * dp_eq[i-1][j];
		}
	}
	for(int i=1;i<=N;i++) {
		for(int j=0;j<=K;j++) {
			cout << dp_eq[i][j] << " ";
		}
		cout << endl;
	}
	for(int i=1;i<=N;i++) {
		for(int j=0;j<=K;j++) {
			cout << dp_less[i][j] << " ";
		}
		cout << endl;
	}
	cout << dp_less[N][K] + dp_eq[N][K] + zero[N] << endl;
}
