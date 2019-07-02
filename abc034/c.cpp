#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 100005
using namespace std;
const ll MOD=1e9+7;

int main(){
  ll W,H;
  cin >> W >> H;
  vector< vector<ll> > dp(W+1,vector<ll>(H));
  for(ll w=0;w<=W;w++) dp[w][0]=0;
  for(ll h=0;h<=H;h++) dp[0][h]=0;
  dp[1][1]=1;
  for(ll w=1;w<=W;w++){
    for(ll h=1;h<=H;h++){
      if( (w==1&&h==1) ) continue;
      dp[w][h]=dp[w-1][h]+dp[w][h-1];
      dp[w][h]%=MOD;
    }
  }
  cout << dp[W][H]%MOD << endl;
}
