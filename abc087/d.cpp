#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 1e5+7;

bool done[MAXN];
int dist[MAXN];

void dfs(int now, vector<vector<pair<int,int>>> &edge) {
	for(int i=0;i<edge[now].size();i++) {
		int next = edge[now][i].first;
		int len = edge[now][i].second;
		if(done[next]) {
			if(dist[next] != dist[now] + len) {
				cout << "No" << endl;
				exit(0);
			}
		} else {
			done[next] = true;
			dist[next] = dist[now] + len;
			dfs(next, edge);
		}
	}
}

int main() {
	int N, M;
	cin >> N >> M;
	vector<vector<pair<int,int>>> edge(N+1);
	for(int i=0;i<M;i++) {
		int l, r, d;
		cin >> l >> r >> d;
		edge[l].push_back({r, d});
		// edge[r].push_back({l, -d});
	}
	for(int i=1;i<=N;i++) {
		if(!done[i]) {
			done[i] = true;
			dfs(i, edge);
		}
	}
	cout << "Yes" << endl;
}
