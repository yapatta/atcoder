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
using namespace std;

int dy[]={1,-1,0,0,1,1,-1,-1,0};
int dx[]={0,0,1,-1,1,-1,1,-1,0};

class UnionFind{
private:
  vector<ll> data;
public:
  UnionFind(ll x){
    data.resize(x,-1);
  }
  //data[x]はxの根の値
  //xが根の場合data[x]は根がxの集合の要素の個数
  ll root(ll x){
    return (data[x]<0) ? x : data[x] = root(data[x]);
  }
  bool isParent(ll x){
  	if(data[x]<0) return true;
  	else return false;
  }
  void unite(ll x, ll y){
    x = root(x);
    y = root(y);
    if(x == y) return;
    //xにyを結合
    data[x] += data[y];
    data[y] = x;
  }
  bool same(ll x, ll y){
    return (root(x) == root(y));
  }
  ll size(ll x){
    return -data[root(x)];
  }
};


ll N,M;

int main(){
	cin >> N >> M;
	UnionFind u(N);
	for(ll i=0;i<M;i++){
		ll x,y,z;
		cin >> x >> y >> z;
		//0基準に
		x--,y--;
		u.unite(x,y);
	}
	ll cnt = 0;
	for(ll key=0;key<N;key++){
		if(u.isParent(key)) cnt++;
	}
	cout << cnt << endl;
}