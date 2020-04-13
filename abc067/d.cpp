#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	cin >> N;
	vector<vector<int>> edge(N);
	for(int i=0;i<N-1;i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	// 0からN-1までの最短距離を求める
	// 0とN-1の真ん中
	vector<int> before(N, 0);
	queue<pair<int,int>> q;
	q.push({-1, 0});
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
	int now = N - 1;
	route.push_back(now);
	while(now != 0) {
		int bef = before[now];
		route.push_back(bef);
		now = bef;
	}
	reverse(route.begin(), route.end());
	int fcnt = 0;
	int forbidden = route[(route.size()+1)/2];

	queue<pair<int,int>> qq;
	qq.push({-1,0});
	while(!qq.empty()) {
		auto tmp = qq.front(); qq.pop();
		int bef = tmp.first;
		int now = tmp.second;
		fcnt++;
		for(int i=0;i<edge[now].size();i++) {
			int next = edge[now][i];
			if(bef == next or next == forbidden) continue;
			qq.push({now,next});
		}
	}
	int scnt = N - fcnt;
	// cout << fcnt << endl;
	cout << ((fcnt>scnt) ? "Fennec" : "Snuke") << endl;
}
