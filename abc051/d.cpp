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

void dijkstra(ll st){
  ll minv;
  vector<ll> used(N,false);
  //d[i] : 自集合からの点iへの最短距離
  vector<ll> d(N,INT_MAX);
  vector<ll> before(N,0);

  d[st] = 0;

  while(1){
    minv = INT_MAX;
    ll u = -1;
    for(ll i=0;i<N;i++){
      if(used[i] == false && minv > d[i]){
        u = i;
        minv = d[i];
      }
    }
    //何もとれなかったとき、つまり、全て探索し終わっているとき
    if(u == -1) break;

    used_side[u][before[u]] = true;
    used_side[before[u]][u] = true;

    used[u] = true;
    for(ll v=0;v<N;v++){
      //uとvがつながっている、かつvが未探索
      if(len[u][v] != NOT_EXIST && used[v] == false){
        if(d[v] > d[u] + len[u][v]){
          d[v] = d[u] + len[u][v];
          before[v] = u;
        }
      }
    }
  }
}


int main(){
	cin >> N >> M;

  //初期化
	adj = vector<vector<ll>>(N);
	A = vector<ll>(N);
	vector<ll> dis(N),st(N),en(N);
  for(ll i=0;i<N;i++){
    for(ll j=0;j<N;j++){
      len[i][j] = -1;
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
  }

  ll ans = 0;
  for(ll i=0;i<N;i++){
    for(ll j=i+1;j<N;j++){
      if(!used_side[i][j]) ans++;
    }
  }
  cout << ans << endl;
}