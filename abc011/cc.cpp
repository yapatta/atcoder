#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

int main(){
  int N;
  cin >> N;
  int g[3];
  cin >> g[0] >> g[1] >> g[2];
  if(N==g[0]||N==g[1]||N==g[2]){
    cout << "NO" << endl;
    return 0;
  }
  sort(g,g+3);
  vector<int> dp(N+1, 101);

  dp[0]=0;
  if(g[0]!=1 && g[1]!=1 && g[2]!=1) dp[1]=1;
  else dp[1]=0;

  if(g[0]!=2 && g[1]!=2 && g[2]!=2) dp[2]=1;
  else dp[2]=0;

  for(int i=2;i<=N-1;i++){
    bool flag1 = (dp[i]!=g[0] && dp[i]!=g[1] && dp[i]!=g[2]);
    bool flag2 = (dp[i-1]!=g[0] && dp[i-1]!=g[1] && dp[i-1]!=g[2]);
    bool flag3 = (dp[i-2]!=g[0] && dp[i-2]!=g[1] && dp[i-2]!=g[2]);
    if(dp[i+1]==g[0] || dp[i+1]==g[1] || dp[i+1]==g[2]) continue;
    if(flag1 && flag2 && flag3) {
      int minDp=min(dp[i]+1,dp[i-1]+1);
      minDp=min(minDp, dp[i-2]+1);
      dp[i+1]=minDp;
    }else if(flag1 && flag2){
      dp[i+1]=min(dp[i]+1,dp[i-1]+1);
    }else if(flag2 && flag3){
      dp[i+1]=min(dp[i-1]+1,dp[i-2]+1);
    }else if(flag1 && flag3){
      dp[i+1]=min(dp[i]+1,dp[i-2]+1);
    }else if(flag1){
      dp[i+1]=dp[i]+1;
    }else if(flag2){
      dp[i+1]=dp[i-1]+1;
    }else if(flag3){
      dp[i+1]=dp[i-2]+1;
    }
  }

  if(dp[N]<=100) cout << "YES" << endl;
  else cout << "NO" << endl;
}
