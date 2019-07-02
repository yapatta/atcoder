#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1e5+5;
const ll INF = 1e13+7;

ll N,M,S,T;
vector<vector<ll> > node;

ll dijkstra(ll s, ll e){
  queue<tuple<ll,ll,ll> > Q;
  vector< vector<ll> > d(N, vector<ll>(3,INF));

  // start, mod, cost
  d[s][0] = 0;
  // start, mod, cost
  Q.push(make_tuple( s, 0, 0));

  while(!Q.empty()){
    tuple<ll ,ll, ll> f = Q.front(); Q.pop();
    ll now = get<0>(f);
	ll mod = get<1>(f);
	ll cost = get<2>(f);
    for(int j=0;j<node[now].size();j++){
      ll next = node[now][j];
	  ll nmod = (mod+1) % 3;
	  ll ncost = cost + 1;
      if(d[next][nmod] > d[now][mod] + 1){
        d[next][nmod] = d[now][mod] + 1;
        Q.push(make_tuple(next, nmod, ncost) );
      }
    }
  }
  return (d[e][0] == INF) ? -1 : (d[e][0]/3);
}

signed
main(){
	cin >> N >> M;
	node = vector<vector<ll> >(N+4);
	for(int i=0;i<M;i++) {
		ll u,v;
		cin >> u >> v;
		u--, v--;
		node[u].push_back(v);
	}
	cin >> S >> T;
	S--, T--;

	cout << dijkstra(S,T) << endl;
}
