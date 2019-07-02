#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
const ll MOD=1e9+7;
using namespace std;

int main() {
  ll N,W;
  cin >> N >> W;
  vector<ll> v(N),w(N);
  vector<vector<ll> > dp(N+1,vector<ll>(W));
  rep(i,N){
    cin >> v[i] >> w[i];
  }
  for(ll i=0;i<=N;i++) dp[i][0]=0;
  for(ll j=0;j<=W;j++) dp[0][j]=0;
  for(ll i=1;i<=N;i++){
    for(ll j=1;j<=W;j++){
      if(j>=w[i-1]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
      else dp[i][j]=dp[i-1][j];
    }
  }
  cout << dp[N][W] << endl;
}
