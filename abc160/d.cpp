#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define All(x) (x).begin(),(x).end()
#define RAll(x) (x).rbegin(),(x).rend()


int main(){
	ll N, X, Y;
	cin >> N >> X >> Y;
	X--, Y--;
	vector<vector<ll>> edge(N, vector<ll>(N, 1000000000));
	for(int i=0;i<N;i++) edge[i][i] = 0;
	for(ll i=0;i<N-1;i++) {
		edge[i][i+1] = 1;
		edge[i+1][i] = 1;
	}
	edge[X][Y] = 1;
	edge[Y][X] = 1;
	for(int i=0;i<=N;i++) {
		for(int j=i+2;j<N;j++) {
			edge[i][j] = edge[i][j-1] + 1;
		}
	}
	for(int i=0;i<=N;i++) {
		for(int j=i+1;j<N;j++) {
			edge[j][i] = edge[i][j];
		}
	}

	for(int i=0;i<=X;i++) {
		for(int j=Y;j<N;j++) {
			edge[i][j] = min(edge[i][j], edge[i][X] + edge[Y][j] + 1);
			edge[j][i] = edge[i][j];
		}
	}
	for(int i=0;i<=X;i++) {
		for(int j=X+1;j<=Y;j++) {
			edge[i][j] = min(edge[i][j], edge[i][X] + 1 + edge[Y][j]);
		}
	}
	for(int i=Y;i<N;i++) {
		for(int j=X;j<Y;j++) {
			edge[i][j] = min(edge[i][j], edge[i][Y] + 1 + edge[X][j]);
			edge[j][i] = edge[i][j];
		}
	}
	for(int i=X;i<=Y;i++) {
		for(int j=i+1;j<=Y;j++) {
			edge[i][j] = min(edge[i][j], edge[i][X] + 1 + edge[Y][j]);
			edge[j][i] = edge[i][j];
		}
	}
	vector<ll> ans(N+1, 0);
	for(ll i=0;i<N;i++) {
		for(ll j=i+1;j<N;j++) {
			ll now = edge[i][j];
			ans[now]++;
		}
	}
	for(ll i=1;i<N;i++) cout << ans[i] << endl;
}
