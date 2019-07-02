#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(x) (x).rbegin(),(x).rend()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}


int main(){
  ll N;
  cin >> N;
  vector<ll> a(N),l(N+2),r(N+2);
  rep(i,N){
    cin >> a[i];
  }
  l[0] = 1;
  l[1] = a[0];
  for(ll i=2;i<=N;i++){
    l[i] = gcd(l[i-1],a[i-1]);
  }

  r[N] = 1;
  r[N-1] = a[N-1];
  for(ll i=N-2;i>=0;i--){
    r[i] = gcd(r[i+1],a[i]);
  }
  ll max = r[0];
  for(ll i=0;i<N;i++){
    if(i==0){
      if(max<r[i+1]) max = r[i+1];
    }
    if(i==N-1){
      if(max<l[i]) max = l[i];
    }
    if(max<gcd(l[i],r[i+1])){
      max = gcd(l[i],r[i+1]);
    }
    //cout << l[i] << " " << r[i+1] << endl;
  }
  cout << max << endl;
}
