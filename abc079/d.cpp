#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<vector<int> > c(11, vector<int>(11)), a(h, vector<int>(w));
	for(int i=0;i<10;i++) {
		for(int j=0;j<10;j++) {
			cin >> c[i][j];
		}
	}

	for(int i=0;i<h;i++) {
		for(int j=0;j<w;j++) {
			cin >> a[i][j];
		}
	}

	// ワーシャルフロイト
	for(int i=0;i<10;i++) {
		for(int j=0;j<10;j++) {
			for(int k=0;k<10;k++) {
				c[j][k] = min(c[j][k], c[j][i]+c[i][k]);
			}
		}
	}
	ll cost = 0;
	for(int i=0;i<h;i++) {
		for(int j=0;j<w;j++) {
			if(a[i][j] == -1) continue;
			int node = a[i][j];
			cost += c[node][1];
		}
	}
	cout << cost << endl;
}
