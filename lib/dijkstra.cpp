#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// ABC035Dを元にしています

// 重み付き有向グラフ
vector<vector<pair<int,ll> > > adj, adjr;
// 滞在時の加算
vector<ll> A;
// 始点からの距離
vector<ll> dist, distr;

// n:点の個数, start: 始点
void dijkstra(int n, int start) {
	// {距離, 始点}
	priority_queue<pair<ll,int>> pq;
	// 始点からの距離
	dist = vector<ll>(n, (ll)INT_MAX * 10000LL);
	// 訪れたかどうか
	vector<bool> done(n, false);

	dist[start] = 0;
	pq.push(make_pair(0LL,0));
	while(!pq.empty()) {
		pair<ll,int> tmp = pq.top(); pq.pop();
		// 現在地と始点からnowまでの距離
		int now = tmp.second;
		ll len = (-1) * tmp.first;
		done[now] = true;
		// 最小値を取り出し, それが最短でなければ無視
		if(dist[now] < len) continue;

		for(int j=0;j<adj[now].size();j++) {
			int next = adj[now][j].first;
			if(done[next]) continue;
			if(dist[next] > dist[now] + adj[now][j].second) {
				dist[next] = dist[now] + adj[now][j].second;
				pq.push(make_pair(dist[next] * (-1), next));
			}
		}
	}
}

// n:点の個数, start: 始点
// 逆向きダイクストラ
void dijkstrar(int n, int start) {
	// {距離, 始点}
	priority_queue<pair<ll,int>> pq;
	// 始点からの距離
	distr = vector<ll>(n, (ll)INT_MAX * 10000LL);
	// 訪れたかどうか
	vector<bool> done(n, false);

	distr[start] = 0;
	pq.push(make_pair(0LL,0));
	while(!pq.empty()) {
		pair<ll,int> tmp = pq.top(); pq.pop();
		// 現在地と始点からnowまでの距離
		int now = tmp.second;
		ll len = (-1) * tmp.first;
		done[now] = true;
		// 最小値を取り出し, それが最短でなければ無視
		if(distr[now] < len) continue;

		for(int j=0;j<adjr[now].size();j++) {
			int next = adjr[now][j].first;
			if(done[next]) continue;
			if(distr[next] > distr[now] + adjr[now][j].second) {
				distr[next] = distr[now] + adjr[now][j].second;
				pq.push(make_pair(distr[next] * (-1), next));
			}
		}
	}
}

int main() {
	int N, M, T;
	cin >> N >> M >> T;
	adj = vector<vector<pair<int,ll> > >(N);
	adjr = vector<vector<pair<int,ll> > >(N);
	A = vector<ll>(N);
	for(auto &a : A) cin >> a;
	for(int i=0;i<M;i++) {
		int a, b;
		ll c;
		cin >> a >> b >> c;
		a--, b--;
		adj[a].push_back(make_pair(b,c));
		adjr[b].push_back(make_pair(a,c));
	}
	dijkstra(N, 0);
	dijkstrar(N, 0);
	// ある地点iにずっと滞在するときが一番最適
	ll ans = 0;
	for(int i=0;i<N;i++) {
		ll rest = max(T - dist[i] - distr[i], 0LL);
		ans = max(ans, rest * A[i]);
	}
	cout << ans << endl;
}
