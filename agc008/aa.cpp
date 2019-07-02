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
  ll x,y;
  cin >> x >> y;
  vector<pair<ll,ll> > a;
  a.pb(mp(1,1));
  a.pb(mp(1,-1));
  a.pb(mp(-1,1));
  a.pb(mp(-1,-1));
  ll min = LLONG_MAX;
  rep(i,4){
    ll f = a[i].first, l = a[i].second;
    ll num = 0;
    if(f<0) num++;
    if(l<0) num++;
    if(f*x<=l*y){
      if(min > (l*y-f*x+num)) min = l*y-f*x+num;
    }
  }
  cout << min << endl;
}
