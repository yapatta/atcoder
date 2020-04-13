#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX_N = 305;
const int COUNT_MAX = 105;

int N,G[3];
bool dp[MAX_N][COUNT_MAX];

void input() {
	cin >> N;
	cin >> G[0] >> G[1] >> G[2];
}

void solve() {
	memset(dp, 0, sizeof(dp));
	for(int i=0;i<3;i++) {
		if(N==G[i]) {
			cout << "NO" << endl;
			return;
		}
	}
	dp[N][0] = true;
	for(int i=N-1;i>=0;i--) {
		for(int c=1;c<=100;c++) {
			for(int j=1;j<=3;j++) {
				if(i == G[0] || i == G[1] || i == G[2]) continue;
				if(i+j<=N && dp[i+j][c-1]) dp[i][c] = dp[i+j][c-1];
			}
		}
	}
	for(int c=0;c<=100;c++) {
		if(dp[0][c]) {
			cout << "YES" << endl;
			return;
		 }
	}
	cout << "NO" << endl;
}

int main() {
	input();
	solve();
}
