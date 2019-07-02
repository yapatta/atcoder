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
  ll N;
  cin >> N;
  vector<pair<ll,ll> > c(N);
  rep(i,N){
    ll tmp;
    cin >> tmp;
    c[i] = make_pair(tmp,i);
  }
  sort(All(c));

  ll f = c[0].first;
  ll s = c[0].second;
  vector<> ;
  for(ll i=1;i<N;i++){
    if((f==c[i]) && ((s-c[i].second<-1) || (1<s-c[i].second)) ){

    }
  }
  ll ans=1;

  cout << ans << endl;
}
