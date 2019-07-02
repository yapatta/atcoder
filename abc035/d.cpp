#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
const ll INF=1e10+1;
using namespace std;

int dy[]={1,-1,0,0,1,1,-1,-1,0};
int dx[]={0,0,1,-1,1,-1,1,-1,0};

ll N,M,T;

vector<vector<pair<ll,ll> > > adj, bdj;
vector<ll> A;
vector<ll> d;

void dijkstra(){
  priority_queue<pair<ll,ll> > PQ;
  vector<bool> used(N);
  for(ll i=0;i<N;i++){
    d[i] = INF;
    used[i] = false;
  }

  //startに行く距離は0
  d[0] = 0;
  PQ.push(make_pair(0,0));

  while(!PQ.empty()){
    pair<ll,ll> f = PQ.top(); PQ.pop();
    ll u = f.second;
    used[u] = true;

    //最小値を取り出し、それが最短でなければ無視
    if(d[u] < f.first * (-1)) continue;

    for(ll j=0;j<adj[u].size();j++){
      ll v = adj[u][j].first;
      if(used[v]) continue;
      if(d[v] > d[u] + adj[u][j].second){
        d[v] = d[u] + adj[u][j].second;
        PQ.push(make_pair(d[v] * (-1), v));
      }
    }
  }
}

void dijkstra2(){
  priority_queue<pair<ll,ll> > PQ;
  vector<bool> used(N);
  for(ll i=0;i<N;i++){
    d[i] = INF;
    used[i] = false;
  }

  //startに行く距離は0
  d[0] = 0;
  PQ.push(make_pair(0,0));

  while(!PQ.empty()){
    pair<ll,ll> f = PQ.top(); PQ.pop();
    ll u = f.second;
    used[u] = true;

    //最小値を取り出し、それが最短でなければ無視
    if(d[u] < f.first * (-1)) continue;

    for(ll j=0;j<bdj[u].size();j++){
      ll v = bdj[u][j].first;
      if(used[v]) continue;
      if(d[v] > d[u] + bdj[u][j].second){
        d[v] = d[u] + bdj[u][j].second;
        PQ.push(make_pair(d[v] * (-1), v));
      }
    }
  }
}


int main(){
	cin >> N >> M >> T;
	d = vector<ll>(N);
	adj = vector<vector<pair<ll,ll> > >(N);
	bdj = vector<vector<pair<ll,ll> > >(N);
	A = vector<ll>(N);
	vector<ll> dis(N),st(N),en(N);

	for(ll i=0;i<N;i++){
		cin >> A[i];
	}

	rep(i,M){
		ll a,b,c;
		cin >> a >> b >> c;
		a--,b--;
		adj[a].push_back(make_pair(b,c));
		bdj[b].push_back(make_pair(a,c));
	}
	dijkstra();
	for(ll i=0;i<N;i++){
		st[i] = d[i];
	}

	dijkstra2();
	for(ll i=0;i<N;i++){
		en[i] = d[i];
	}
	vector<ll> ans(N);

	for(ll i=0;i<N;i++){
		dis[i] = st[i] + en[i];
		ans[i] = (T-st[i]>0) ? ((T-dis[i]) * A[i]) : 0;
	}
	sort(All(ans));
	cout << ans[N-1] << endl;
}