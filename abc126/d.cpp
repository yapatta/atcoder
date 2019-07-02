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

ll N;
vector<bool> used;
vector<vector<pair<ll,ll> > > node;
//vector<vector<ll> > l;
vector<bool> color;

void dfs(ll id,ll value);

int main(){
	cin >> N;
	used = vector<bool>(N+1,false);
	node = vector<vector<pair<ll,ll> > >(N+1);
	//l = vector<vector<ll> >(N+1,vector<ll>(N+1,INF));
	color = vector<bool>(N+1, 0);

	for(ll i=0;i<N-1;i++){
		ll u,v,w;
		cin >> u >> v >> w;
		node[u].pb({v,w});
		node[v].pb({u,w});
	}

	color[1] = 1;
	dfs(1,0);

	for(ll i=1;i<=N;i++){
		if(color[i]) putchar('1');
		else putchar('0');
		putchar('\n');
	}
}

void dfs(ll id,ll value)
{
	used[id]=true;
	for(ll key=0;key<node[id].size();key++)
	{	
		ll nxnode = node[id][key].first;
		if(used[nxnode]) continue;

		ll nxvalue = value + node[id][key].second;
		if(used[nxnode]==false){
			if(nxvalue % 2 == 0){
				color[nxnode] = 1;
			}
			dfs(nxnode,nxvalue);
		}
	}
}