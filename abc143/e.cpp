#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAX_N = 305;
const ll INF = 1e10;
ll edge[MAX_N][MAX_N];
ll wf[MAX_N][MAX_N];
ll fuel[MAX_N][MAX_N];
ll N, M, L;

int main(){
	cin >> N >> M >> L;

	// 初期化
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			fuel[i][j] = wf[i][j] = edge[i][j] = INF;
		}
		fuel[i][i] = 0;
		edge[i][i] = 0;
		wf[i][i] = 0;
	}

	for(int i =0;i<M;i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		a--, b--;
		wf[a][b] = edge[a][b] = c;
		wf[b][a] = edge[b][a] = c;
		if(c <= L) fuel[a][b] = fuel[b][a] = 1;
	}

	// ワーシャルフロイト
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			for(int k=0;k<N;k++) {
				wf[j][k] = min(wf[j][k], wf[j][i]+wf[i][k]);
			}
		}
	}
	
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			if(wf[i][j] <= L) {
				fuel[i][j] = 1;
			}
		}
	}
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			for(int k=0;k<N;k++) {
				fuel[j][k] = min(fuel[j][k], fuel[j][i]+fuel[i][k]);
			}
		}
	}

	int Q;
	cin >> Q;
	for(int i=0;i<Q;i++) {
		ll s,t;
		cin >> s >> t;
		s--, t--;
		if(fuel[s][t] != INF) cout << fuel[s][t]-1 << endl;
		else cout << -1 << endl;
	}
}
