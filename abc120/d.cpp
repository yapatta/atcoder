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
    if(par[x]<0) return x;
    return par[x]=root(par[x]);
  }
  //親が同じ
  ll same(ll x, ll y){
    return (root(x)==root(y));
  }
  //xの集合とyの集合を結合
  void unite(ll x, ll y){
    x=root(x);
    y=root(y);
    if(x==y){
      return;
    }
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
  vector<ll> a(M),b(M);
  rep(i,M){
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
  }
  UnionFind uf(N);
  vector<ll> ans(M);
  ans[M-1]=N*(N-1)/2;
  for(ll i=M-1;i>=0;i--){
    if(uf.same(a[i],b[i])){
      ans[i-1]=ans[i];
      continue;
    }
    //size1とsize2は異なる集合の場合、その集合の要素の個数
    ll size1=uf.size(a[i]);
    ll size2=uf.size(b[i]);
    ans[i-1]=ans[i]-size1*size2;
    uf.unite(a[i],b[i]);
  }
  for(ll tmp : ans) cout << tmp << endl;
}
