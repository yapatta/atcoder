#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = INT_MAX;

// 最大流
// 以下参照
// https://www.k-pmpstudy.com/entry/2019/12/19/FordFulkerson

// 辺の行き先, 容量, 逆辺
struct edge {
	int to, cap, rev;
};

vector<bool> used;
vector<vector<edge>> G;

void add_edge(int from, int to, int cap) {
	G[from].push_back(edge{to, cap, (int)G[to].size()});
	G[to].push_back(edge{from, 0, (int)G[from].size() - 1});
}

/// v -> t のパスをdfsで探す
// mincap: 通った辺の中の最小容量
int flow_dfs(int v, int t, int mincap) {
	if (v == t) return mincap;
	used[v] = true;
	for(edge &e : G[v]) {
		if(!used[e.to] and e.cap > 0) {
			int d = flow_dfs(e.to, t, min(mincap, e.cap));
			if (d > 0) {
				e.cap -= d;
				G[e.to][e.rev].cap += d;
				return d;
			}
		}
	}
	return 0;
}

// s -> tで最大流
int max_flow(int s, int t) {
	int flow = 0;
	while(true) {
		used.assign((int)used.size(), false);
		int f = flow_dfs(s, t, INF);
		if(f == 0) return flow;
		flow += f;
	}
}

int main() {
	int V, E;
	cin >> V >> E;
	G.resize(V);
	used.resize(V, false);
	for(int i=0;i<E;i++) {
		int u, v, c;
		cin >> u >> v >> c;
		add_edge(u, v, c);
	}
	cout << max_flow(0, V - 1) << endl;
}
