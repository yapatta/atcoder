#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define All(x) (x).begin(),(x).end()
using namespace std;

int main(){
  ll N,M;
  cin >> N >> M;
  vector<ll> x(M);
  //dp[m][n] : mは要素の個数,nは何個こまを置けるか
  vector< vector<ll> > dp(M+1,vector<ll>(N+1,0));
  for(ll i=0;i<M;i++){
    cin >> x[i];
  }
  sort(All(x));

  dp[1][1]=0;
  for(ll i=2;i<=M;i++) dp[i][1]=dp[i-1][1]+(x[i-1]-x[i-2]);
  for(ll i=1;i<=M;i++){
    for(ll j=1;j<=N;j++){
      if(i!=1) dp[i][j]=min(dp[i-1][j]+(x[i]-x[i-1]), dp[i][j]);
      dp[i][j+1]=dp[i][j];
    }
  }
  for(ll i=1;i<=M;i++){
    for(ll j=1;j<=N;j++){
      cout << dp[i][j] << endl;
    }
    cout << endl;
  }
  cout << dp[M][N] << endl;
}
