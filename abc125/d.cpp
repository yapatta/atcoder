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
  ll N;
  cin >> N;
  vector<ll> ans;
  ll m=0,p=0;
  rep(i,N){
    ll a;
    cin >> a;
    if(a<0) {
      m--;
      ans.pb(-a);
    }else {
      p++;
      ans.pb(a);
    }
  }
  ll sum = 0;
  if(m%2==0){
    rep(i,N){
      sum += ans[i];
    }
  }else{
    sort(All(ans));
    sum -= ans[0];
    for(ll i=1;i<N;i++){
      sum += ans[i];
    }
  }
  cout<< sum << endl;
}
