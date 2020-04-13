#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	cin >> N;
	int u, v;
	cin >> u >> v;
	u--, v--;
	vector<vector<int>> edge(N);
	for(int i=0;i<N-1;i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}

	// uからvまでの最短距離を求める
	// uとvの真ん中
	vector<int> before(N, 0);
	queue<pair<int,int>> q;
	q.push({-1, u});
	while(!q.empty()) {
		auto tmp = q.front(); q.pop();
		int bef = tmp.first;
		int now = tmp.second;
		if(bef != -1) {
			before[now] = bef;
		}
		for(int i=0;i<edge[now].size();i++) {
			int next = edge[now][i];
			if(next == bef) continue;
			q.push({now, next});
		}
	}
	vector<int> route;
	int now = v;
	route.push_back(now);
	while(now != u) {
		int bef = before[now];
		route.push_back(bef);
		now = bef;
	}

	int cnt = 0;
	int plus = 0;
	int start, forbidden;
	if(route.size() % 2 == 0) {
		start = route[route.size() / 2];
		forbidden = route[route.size() / 2 - 1];
		cnt += route.size() / 2 - 1;
	} else {
		start = route[(route.size()+1)/2];
		forbidden = route[(route.size() - 1) / 2];
		cnt += (route.size() - 1) / 2 - 1;
		// 最後の
		cnt++;
	}
	// startからの距離
	vector<int> dist(N,0);
	queue<pair<int,int>> qq;
	qq.push({forbidden,start});
	while(!qq.empty()) {
		auto tmp = qq.front(); qq.pop();
		int bef = tmp.first;
		int now = tmp.second;
		if(bef != forbidden) dist[now] = dist[bef] + 1;
		plus = max(plus, dist[now]);
		for(int i=0;i<edge[now].size();i++) {
			int next = edge[now][i];
			if(bef == next) continue;
			qq.push({now,next});
		}
	}
	cnt += plus;
	cout << cnt << endl;
}
