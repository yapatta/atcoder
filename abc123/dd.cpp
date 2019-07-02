#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll X,Y,Z,K;
  cin >> X >> Y >> Z >> K;
  vector<ll> a(X),b(Y),c(Z);
  rep(i,X){
    cin >> a[i];
  }
  rep(i,Y){
    cin >> b[i];
  }
  rep(i,Z){
    cin >> c[i];
  }
  vector<ll> ab,ans;
  rep(i,X){
    rep(j,Y){
      ab.pb(a[i]+b[j]);
    }
  }
  sort(All(ab));
  for(ll i=0;i<K && i<X*Y;i++){
    for(ll j=0;j<K && j<Z;j++){
      ans.pb(ab[ab.size()-1-i]+c[Z-1-j]);
    }
  }
  sort(All(ans));
  for(ll i=0;i<K;i++){
    cout << ans[ans.size()-1-i] << endl;
  }
}
