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
  vector<ll> a(N), k(N);
  ll f=0;
  rep(i,N){
    cin >> a[i];
  }
  sort(a.rbegin(), a.rend());
  ll g = a[1];
  for(ll i=2;i<N;i++){
    g = gcd(g,a[i]);
  }
  vector<vector<ll> > dp(N+2,vector<ll>(2,0));
  dp[0][0] = a[0];
  dp[0][1] = a[1];
  for(ll i=0;i<N-1;i++){
    dp[i+1][0] = gcd(dp[i][0],a[i+1]);
    dp[i+1][1] = max(dp[i][0], gcd(dp[i][1],a[i+1]));
  }
  cout << max(dp[N-1][1],g) << endl;
}
