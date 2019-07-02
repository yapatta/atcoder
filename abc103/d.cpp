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

int main(){
	ll N,M;
	cin >> N >> M;
	vector<pll> ba;
	rep(i,M){
		ll a,b;
		cin >> a >> b;
		a--,b--;
		ba.push_back(make_pair(b,a));
	}
	sort(All(ba));

	//first: b, second: a
	ll before = -1;
	vector<bool> bridge(N-1,true);
	for(ll i=0;i<M;i++){
		if(ba[i].second <= before && before < ba[i].first){
			continue;
		}else{
			before = ba[i].first - 1;
			bridge[before] = false;
		}
	}

	ll ans = 0;
	for(ll i=0;i<N-1;i++){
		if(!bridge[i]) ans++;
	}
	cout << ans << endl;
}