#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;
int main() {
	cin >> N;
	vector<vector<pair<int,ll>>> edge(N);
	for(int i=0;i<N-1;i++) {
		int a, b;
		ll c;
		cin >> a >> b >> c;
		a--, b--;
		edge[a].push_back({b,c});
		edge[b].push_back({a,c});
	}
	int Q, K;
	cin >> Q >> K;
	K--;
	queue<int> q;
	vector<ll> dist(N, LLONG_MAX);
	dist[K] = 0;
	q.push(K);
	while(!q.empty()) {
		int now = q.front(); q.pop();
		for(int i=0;i<edge[now].size();i++) {
			int next = edge[now][i].first;
			ll len = edge[now][i].second;
			if(dist[now] + len < dist[next]) {
				dist[next] = dist[now] + len;
				q.push(next);
			}
		}
	}
	for(int i=0;i<Q;i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		cout << dist[x] + dist[y] << endl;
	}
}
