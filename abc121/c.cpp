#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll N,M;
  cin >> N >> M;
  vector<pair<ll,ll> > p;
  rep(i,N){
    ll a,b;
    cin >> a >> b;
    p.push_back(make_pair(a,b));
  }
  sort(All(p));
  ll ans=0,sum=0;
  rep(i,p.size()){
    ans += p[i].second;
    sum += p[i].first*p[i].second;
    if(ans>M){
      ans -= p[i].second;
      sum -= p[i].first*p[i].second;
      sum += p[i].first*(M-ans);
      break;
    }
  }
  cout << sum << endl;
}
