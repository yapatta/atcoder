#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9+7;

vector<vector<int>> edge;
ll ans = 0;

pair<ll,ll> dfs(int now, int bef, ll bw, ll bb) {
	ll nw = bw + bb;
	ll nb = bw;
	nw %= MOD;
	nb %= MOD;
	if(edge[now].size() == 1 and edge[now][0] == bef) {
		nw %= MOD;
		nb %= MOD;
		return make_pair(nw, nb);
	}
	for(int i=0;i<edge[now].size();i++) {
		int next = edge[now][i];
		if(next == bef) continue;
		auto res = dfs(next, now, 1, 0);
		int nxw = res.first, nxb = res.second;
	}
	return;
}

signed main(void) {
	int N;
	cin >> N;
	edge.resize(N);
	for(int i=0;i<N-1;i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	dfs(0, -1, 1, 0);
	cout << ans << endl;
}
