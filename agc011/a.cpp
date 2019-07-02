#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll N,C,K;
  cin >> N >> C >> K;
  vector<pair<ll,ll> > t(N);
  rep(i,N){
    ll tmp;
    cin >> tmp;
    t[i] = mp(tmp,tmp+K);
  }
  sort(All(t));

  ll sum = 1,cnt = 1;
  ll f = t[0].first,l = t[0].second;
  for(ll i=1;i<N;i++){
    f = t[i].first;
    cnt++;
    if(l-f < 0 || cnt > C){
      sum++;
      f = t[i].first;
      l = t[i].second;
      cnt = 1;
      continue;
    }
  }
  cout << sum << endl;
}
