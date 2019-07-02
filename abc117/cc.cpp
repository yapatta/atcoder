#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define All(x) (x).begin(),(x).end()
using namespace std;

int main() {
  ll N,M;
  cin >> N >> M;
  vector<ll> x(M),sa;
  rep(i,M){
    cin >> x[i];
  }
  sort(All(x));
  if(M==1){
    cout << 0 << endl;
    return 0;
  }
  //すべての差を求めて,差の合計からN-1個
  for(ll i=0;i<=M-2;i++) {
    sa.push_back(x[i+1]-x[i]);
  }
  sort(All(sa));
  ll saMax=x[M-1]-x[0];
  for(ll i=0;i<N-1&&i<sa.size();i++) {
    saMax -= sa[sa.size()-1-i];
  }
  cout << saMax << endl;
}
