#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e14;

struct Edge {
	Edge(ll from, ll to, ll get_coin): from(from), to(to), get_coin(get_coin) {}
	ll from, to, get_coin;
};

int main() {
	ll N, M, P;
	cin >> N >> M >> P;
	vector<Edge> edges;
	for(int i=0;i<M;i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		a--, b--;
		c -= P;
		edges.emplace_back(a, b, c);
	}

	vector<ll> coin(N, -INF);
	coin[0] = 0;

	for (int i=0;i<N;i++) {
		for (int j=0;j<M;j++) {
			Edge e = edges[j];

			if (coin[e.from] != -INF and coin[e.to] < coin[e.from] + e.get_coin) {
				coin[e.to] = coin[e.from] + e.get_coin;
			}
		}
	}

	vector<bool> is_negative(N, false);
	for (int i=0;i<N;i++) {
		for (int j=0;j<M;j++) {
			Edge e = edges[j];

			if (coin[e.from] != -INF and coin[e.to] < coin[e.from] + e.get_coin) {
				coin[e.to] = coin[e.from] + e.get_coin;
				is_negative[e.to] = true;
			}
			if(is_negative[e.from]) is_negative[e.to] = true;
		}
	}

	if(is_negative[N-1]) {
		cout << -1 << endl;
	} else {
		cout << max(coin[N-1], 0LL) << endl;
	}
}
