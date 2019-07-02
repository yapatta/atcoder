#include <bits/stdc++.h>
#define MAX 100005
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
ll dp[MAX][MAX];

int main() {
  ll a,b,c,X,Y;
  cin >> a >> b >> c >> X >> Y;

  dp[0][0]=0;
  for(ll x=1;x<=X;x++) dp[x][0]=dp[x-1][0]+a;
  for(ll y=1;y<=Y;y++) dp[0][y]=dp[0][y-1]+b;

  for(ll x=1;x<=X;x++) {
    for(ll y=1;y<=Y;y++) {
      dp[x][y] = min(dp[x-1][y]+a,dp[x][y-1]+b);
      dp[x][y] = min(dp[x][y],dp[x-1][y-1]+2*c);
    }
  }
  cout << dp[X][Y] << endl;
}
