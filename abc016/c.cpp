#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX_N (int)15
#define INF (int)(1e9+7)
int node[MAX_N][MAX_N];

signed main() {
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			node[i][j] = INF;
		}
	}
	for(int i=0;i<m;i++) {
		int a,b;
		cin >> a >> b;
		a--, b--;
		node[a][b] = 1;
		node[b][a] = 1;
	}
	for(int j=0;j<n;j++) {
		for(int k=0;k<n;k++) {
			for(int i=0;i<n;i++) {
				node[j][k] = min(node[j][k], node[j][i] + node[i][k]);
			}
		}
	}
	for(int i=0;i<n;i++) {
		int ans = 0;
		for(int j=0;j<n;j++) {
			if(i==j) continue;
			if(node[i][j] == 2) {
				ans++;
			}
		}
		cout << ans << endl;
	}
}
