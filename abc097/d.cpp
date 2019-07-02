#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

class UnionFind{
private:
  //par[x]はxの根の値
  vector<ll> par;
public:
  UnionFind(ll N){
    par.assign(N,-1);
  }
  ll root(ll x){
    return (par[x]<0 ? x : par[x]=root(par[x]));
  }
  //親が同じ
  ll same(ll x, ll y){
    return (root(x)==root(y));
  }
  //xの集合とyの集合を結合
  void unite(ll x, ll y){
    x=root(x), y=root(y);
    if(x==y){
      return;
    }
    //要素の個数が大きい方に、小さい方を結合させる
    //要素の個数が大きいほうがx、小さい方がy
    if(par[y]<par[x]) swap(x,y);
    par[x]+=par[y];
    par[y]=x;
  }
  ll size(ll x){
    return -par[root(x)];
  }

};

int main(){
  ll N,M;
  cin >> N >> M;
  vector<ll> p(N),x(M),y(M);
  rep(i,N){
    cin >> p[i];
    p[i]--;
  }
  rep(i,M){
    cin >> x[i] >> y[i];
    x[i]--;
    y[i]--;
  }
  UnionFind uf(N);
  ll ans=0;
  rep(i,M){
    uf.unite(x[i],y[i]);
  }
  rep(i,N){
    if(uf.same(i,p[i])) ans++;
  }
  cout << ans << endl;
}
