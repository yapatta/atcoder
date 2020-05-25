#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;
using pii = pair<int,int>;
#define ALL(x) (x).begin(),(x).end()

struct Edge {
	Edge(ll t, ll a, ll b): to(t), cost_coin(a), cost_time(b) {}
	ll to, cost_coin, cost_time;
};

int main(){
	ll N, M, S;
	cin >> N >> M >> S;
	vector<vector<Edge>> edges(N);
	for(int i=0;i<M;i++) {
		ll u, v, a, b;
		cin >> u >> v >> a >> b;
		u--, v--;
		edges[u].emplace_back(v, a, b);
		edges[v].emplace_back(u, a, b);
	}

	vector<ll> C(N), D(N);
	for(int i=0;i<N;i++) {
		cin >> C[i] >> D[i];
	}

	const ll MAX_COIN = N * 50;
	constexpr ll INF = LLONG_MAX;
	vector<vector<ll>> cost(N, vector<ll>(MAX_COIN + 1, INF));

	struct Element {
		ll node, coin, cost_time;
		bool operator<(const Element &rhs) const {
			return cost_time < rhs.cost_time;
		}
		bool operator>(const Element &rhs) const {
			return cost_time > rhs.cost_time;
		}
		bool operator==(const Element &rhs) const {
			return cost_time == rhs.cost_time;
		}
	};

	priority_queue<Element, vector<Element>, greater<Element>> pq;

	S = min(S, MAX_COIN);
	cost[0][S] = 0;
	pq.push({0, S, 0});
	while(!pq.empty()) {
		Element t = pq.top();
		pq.pop();

		// この点tへの移動時間が, 既に探索したtへの移動時間よりも長い
		if(t.cost_time > cost[t.node][t.coin]) {
			continue;
		}

		for(const Edge &e : edges[t.node]) {
			// この辺を移動するのに必要なコインが手持ちにない
			if(e.cost_coin > t.coin) {
				continue;
			}
			ll new_cost_time = t.cost_time + e.cost_time;
			ll new_coin = t.coin - e.cost_coin;
			if(new_cost_time < cost[e.to][new_coin]) {
				cost[e.to][new_coin] = new_cost_time;
				pq.push({e.to, new_coin, new_cost_time});
			}
		}

		if(t.coin < MAX_COIN) {
			ll new_cost_time = t.cost_time + D[t.node];
			ll new_coin = min(MAX_COIN, t.coin + C[t.node]);
			if(new_cost_time < cost[t.node][new_coin]) {
				cost[t.node][new_coin] = new_cost_time;
				pq.push({t.node, new_coin, new_cost_time});
			}
		}
	}

	for(int i=1;i<N;i++) {
		cout << *min_element(cost[i].begin(), cost[i].end()) << endl;
	}
}
