#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class UnionFind {
private:
  vector<ll> par_;
public:
  UnionFind(ll n) {
    //par_[i]がiの集合サイズ
    par_.resize(n, -1);
  }

  //根を求める
  //集合の要素数はマイナスで表すから、、マイナスになる前の数が根の値
  ll root(ll x) {
    return (par_[x]<0 ? x : par_[x]=root(par_[x]));
  }

  //xとyの属する集合を併合
  void unite(ll x, ll y) {
    x=root(x);
    y=root(y);
    if(x==y) {
      return;
    }
    par_[x]+=par_[y];
    par_[y]=x;
  }

  //xが属する集合のサイズを取得
  ll size(ll x) {
    return -par_[root(x)];
  }

  //xとyが同じ集合に属するか否かを判定
  bool same(ll x, ll y) {
    return (root(x) == root(y));
  }
};

int main() {
  ll N, M;
  cin >> N >> M;
  vector<ll> A(M), B(M);
  for (ll i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
    A[i]--;
    B[i]--;
  }

  UnionFind uf(N);
  vector<ll> ans(M);
  ans[M-1]=N*(N-1)/2;
  for (ll i=M-1;i>0;i--) {
    //同じ属性に属する場合、ansは増えない
    if (uf.same(A[i], B[i])) {
      ans[i-1]=ans[i];
      continue;
    }
    //違う属性の場合
    //属性の要素の個数を記録
    ll size1=uf.size(A[i]);
    ll size2=uf.size(B[i]);

    //異なる２つの属性を足し合わせる
    ans[i-1]=ans[i]-size1*size2;
    uf.unite(A[i], B[i]);
  }
  for (auto a : ans) {
    cout << a << endl;
  }
}
