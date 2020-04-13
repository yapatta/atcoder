#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N, C;
	cin >> N >> C;
	vector<vector<int>> D(C,vector<int>(C)), c(N,vector<int>(N));
	for(int i=0;i<C;i++) {
		for(int j=0;j<C;j++) {
			cin >> D[i][j];
		}
	}
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			cin >> c[i][j];
			c[i][j]--;
		}
	}
	vector<vector<int>> rest(N,vector<int>(N));
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			rest[i][j] = ((i+1) + (j+1)) % 3;
		}
	}
	// color[3で割ったあまり][色(0<n<C)]
	vector<vector<int>> color(3, vector<int>(C, 0));
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			if(rest[i][j] == 0) color[0][c[i][j]]++;
			if(rest[i][j] == 1) color[1][c[i][j]]++;
			if(rest[i][j] == 2) color[2][c[i][j]]++;
		}
	}

	int ans = INT_MAX;
	// C色の中から3色(i, j, k)を選ぶ
	for(int i=0;i<C;i++) {
		for(int j=0;j<C;j++) {
			if(i == j) continue;
			for(int k=0;k<C;k++) {
				int tmpsum = 0;
				if(i == k or j == k) continue;
				for(int l=0;l<C;l++) tmpsum += (color[0][l]) * D[l][i];
				for(int l=0;l<C;l++) tmpsum += (color[1][l]) * D[l][j];
				for(int l=0;l<C;l++) tmpsum += (color[2][l]) * D[l][k];
				ans = min(ans, tmpsum);
			}
		}
	}
	
	cout << ans << endl;
}
