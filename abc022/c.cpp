#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;
constexpr int INF = 1e9;

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> dist(N,vector<int>(N, INF));
	vector<pair<int,int>> st;
	for(int i=0;i<M;i++) {
		int u, v, l;
		cin >> u >> v >> l;
		u--, v--;
		if(u == 0) st.push_back(make_pair(v, l));
		else if(v == 0) st.push_back(make_pair(u, l));
		else dist[u][v] = dist[v][u] = l;
	}
	for(int i=1;i<N;i++) {
		for(int j=1;j<N;j++) {
			for(int k=1;k<N;k++) {
				dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
			}
		}
	}
	int ans = INF;
	for(auto &start : st) {
		for(auto &goal : st) {
			if(start.first == goal.first) continue;
			ans = min(ans, dist[start.first][goal.first] + start.second + goal.second);
		}
	}
	if(ans >= INF) cout << -1 << endl;
	else cout << ans << endl;
}
