#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n;
	cin >> n;
	vector<vector<int> > d(n+1,vector<int>(n+1,0));
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cin >> d[i][j];
		}
	}
	// 前処理
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			d[i][j] += d[i-1][j] + d[i][j-1] - d[i-1][j-1];
		}
	}
	int q;
	cin >> q;
	for(int k=0;k<q;k++) {
		int p;
		cin >> p;
		int ans = 0;
		for(int h=1;h<=min(p,n);h++) {
			int w = min(p/h, n);
			for(int i=h;i<=n;i++) {
				for(int j=w;j<=n;j++) {
					ans = max(ans, d[i][j] - d[i-h][j] - d[i][j-w] + d[i-h][j-w]);
				}
			}
		}
		cout << ans << endl;
	}
}
