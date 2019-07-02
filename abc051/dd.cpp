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
#define NOT_EXIST -1

int dy[]={1,-1,0,0,1,1,-1,-1,0};
int dx[]={0,0,1,-1,1,-1,1,-1,0};

ll N,M,T;
bool used_side[105][105];
ll len[105][105];

vector<vector<ll> > adj;
vector<ll> A;
vector<ll> d;

void dijkstra(ll st){
  // マイナス距離,今の点,前の点
  priority_queue<pair<ll, ll> > PQ;
  vector<bool> used(N);
  for(ll i=0;i<N;i++){
    d[i] = INF;
    used[i] = false;
  }

  //startに行く距離は0
  d[st] = 0;
  PQ.push(make_pair(0,st));

  while(!PQ.empty()){
    pair<ll, ll> f = PQ.top(); PQ.pop();
    ll u = f.second;

    //最小値を取り出し、それが最短でなければ無視
    if(d[u] < f.first * (-1)) continue;

    for(ll j=0;j<adj[u].size();j++){
      ll v = adj[u][j];
      if(used[v]) continue;
      if(len[u][v] == NOT_EXIST) continue;
      if(d[v] > d[u] + len[u][v]){
        d[v] = d[u] + len[u][v];
        PQ.push(make_pair(d[v] * (-1), v));
      }
    }
  }
}


int main(){
	cin >> N >> M;

  //初期化
	d = vector<ll>(N);
	adj = vector<vector<ll>>(N);

  for(ll i=0;i<N;i++){
    for(ll j=0;j<N;j++){
      len[i][j] = NOT_EXIST;
      used_side[i][j] = false;
    }
  }

	for(ll i=0;i<M;i++){
		ll a,b,c;
		cin >> a >> b >> c;
		a--,b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
    len[a][b] = c;
    len[b][a] = c;
	}

  for(ll i=0;i<N;i++){
    dijkstra(i);
    for(ll j=0;j<N;j++){
      for(ll k=0;k<N;k++){
        if(len[k][j]==NOT_EXIST || len[j][k]==NOT_EXIST) continue;
        if(d[j] == d[k] + len[k][j] || d[k] == d[j] + len[j][k]){
          used_side[k][j] = true;
          used_side[j][k] = true;
        }
      }
    }
  }
  ll ans = 0;

  for(ll i=0;i<N;i++){
    for(ll j=i+1;j<N;j++){
      if(!used_side[i][j] && len[i][j]!=NOT_EXIST) ans++;
    }
  }
  cout << ans << endl;
}
