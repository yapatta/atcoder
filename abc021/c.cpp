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
	vector<vector<int>> nodes(N);
	for(int i=0;i<M;i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		nodes[x].push_back(y);
		nodes[y].push_back(x);
	}
	queue<pair<int,int>> q;
	vector<pair<int,int>> dist(N, make_pair(INT_MAX, 0));
	q.push(make_pair(a,0));
	while(!q.empty()) {
		auto tmp = q.front(); q.pop();
		// tmp.secondがtmp.firstに行くまでの距離
		// dist[].firstが最小となる距離, dist[].secondがその距離を持っている個数
		if(tmp.second < dist[tmp.first].first) {
			dist[tmp.first] = make_pair(tmp.second, 1);
		} else if(tmp.second == dist[tmp.first].first){
			dist[tmp.first].second++;
			dist[tmp.first].second %= MOD;
		} else {
			continue;
		}
		for(int i=0;i<nodes[tmp.first].size();i++) {
			if(dist[nodes[tmp.first][i]].first < tmp.second + 1) continue;
			q.push(make_pair(nodes[tmp.first][i], tmp.second + 1));
		}
	}
	dist[b].second %= MOD;
	cout << dist[b].second << endl;
}
