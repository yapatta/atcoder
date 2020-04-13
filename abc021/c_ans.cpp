#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll MOD = 1e9+7;

int main(void) {
	int N, M, a, b;
	cin >> N;
	cin >> a >> b;
	cin >> M;
	a-- ,b--;
	vector<vector<int>> edge(N), memo(N, vector<int>(N, 0));
	for(int i=0;i<M;i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		if(memo[x][y] == 0) {
			edge[x].push_back(y);
			edge[y].push_back(x);
		}
		memo[x][y]++;
		memo[y][x]++;
	}

	vector<int> cnt(N, 0), dist(N, INT_MAX);
	cnt[a]++;
	dist[a] = 0;

	queue<int> q;
	q.push(a);
	while(!q.empty()) {
		int now = q.front(); q.pop();
		for(int i=0;i<edge[now].size();i++) {
			int next = edge[now][i];
			if(dist[now] + 1 < dist[next]) {
				q.push(next);
				dist[next] = dist[now] + 1;
				cnt[next] = 0;
			}
			if(dist[next] == dist[now] + 1) {
				cnt[next] += cnt[now] * memo[now][next];
				cnt[next] %= MOD;
			}
		}
	}
	cout << cnt[b] << endl;
}
