#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e15;

signed main(void) {
	int N;
	cin >> N;
	vector<vector<ll>> A(N, vector<ll>(N)), war(N, vector<ll>(N));
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			cin >> A[i][j];
			war[i][j] = A[i][j];
		}
	}

	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			for(int k=0;k<N;k++) {
				war[j][k] = min(war[j][k], war[j][i] + war[i][k]);
			}
		}
	}

	ll ans = 0;
	for(int i=0;i<N;i++) {
		for(int j=i+1;j<N;j++) {
			if(war[i][j] == A[i][j]) {
				bool flag = true;
				for(int k=0;k<N;k++) {
					if(k != i and k != j and war[i][k] + war[k][j] == war[i][j]) {
						flag = false;
					}
				}
				if(flag) {
					ans += war[i][j];
				}
			} else {
				cout << -1 << endl;
				return 0;
			}
		}
	}

	cout << ans << endl;
}
