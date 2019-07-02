#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;
const ll KEY=1e18;

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}

int main(){
  ll N,K;
  cin >> N >> K;
  vector<ll> a(N);
  ll max = 0;
  rep(i,N){
    cin >> a[i];
    if(max<a[i]) max = a[i];
  }
  ll key = a[0];
  for(ll i=1;i<N;i++){
    key = gcd(key,a[i]);
  }
  if(K%key==0 && max>=K) cout << "POSSIBLE" << endl;
  else cout << "IMPOSSIBLE" << endl;
}
