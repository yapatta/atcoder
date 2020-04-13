#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr int MOD = 1e9+7;

int main() {
	int N, a, b, M;
	cin >> N >> a >> b;
	a--, b--;
	cin >> M;

	vector<vector<int>> edge(N);
	vector<int> num(N, 0), dist(N, INT_MAX);
	num[a]++;
	dist[a] = 0;

	for(int i=0;i<M;i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		edge[x].push_back(y);
		edge[y].push_back(x);
	}
	queue<int> q;
	q.push(a);
	while(!q.empty()) {
		int now = q.front(); q.pop();
		for(int i=0;i<edge[now].size();i++) {
			int next = edge[now][i];
			if(dist[now] + 1 < dist[next]) {
				dist[next] = dist[now] + 1;
				num[next] = num[now];
				num[next] %= MOD;
				q.push(next);
			} else if (dist[now] + 1 == dist[next]) {
				num[next] += num[now];
				num[next] %= MOD;
			}
		}
	}

	cout << num[b] << endl;
}
