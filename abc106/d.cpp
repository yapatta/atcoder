#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N, M, Q;
	cin >> N >> M >> Q;
	// bet[a][b]: a以上b以下ということ
	vector<vector<int>> bet(N+1, vector<int>(N+1, 0));
	for(int i=0;i<M;i++) {
		int l, r;
		cin >> l >> r;
		bet[l][r]++;
	}
	for(int i=1;i<=N;i++) {
		for(int j=1;j<=N;j++) {
			// bet[i][j]は左i, 右jの以下の全て
			bet[i][j] = bet[i][j] + bet[i-1][j] + bet[i][j-1] - bet[i-1][j-1];
		}
	}
	/*
	for(int i=0;i<=N;i++) {
		for(int j=0;j<=N;j++) {
			cout << bet[i][j] << " ";
		}
		cout << endl;
	}
	*/
	for(int i=0;i<Q;i++) {
		int p, q;
		cin >> p >> q;
		cout << bet[q][q] - bet[p-1][q] - bet[q][p-1] + bet[p-1][p-1] << endl;
	}
}
