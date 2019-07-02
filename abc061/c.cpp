#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
const ll MOD=1e9+7;
using namespace std;
ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  ll tmp=gcd(a,b);
  return (a/tmp)*(b/tmp)*tmp;
}

int main() {
  ll N,K;
  cin >> N >> K;
  vector< pair<ll,ll> > ab(N);
  rep(i,N){
    ll a,b;
    cin >> a >> b;
    ab[i]=make_pair(a,b);
  }
  sort(All(ab));
  ll i=0;
  while(1){
    if(K>ab[i].second){
      K -= ab[i].second;
      i++;
    }else{
      cout << ab[i].first << endl;
      return 0;
    }
  }
}
