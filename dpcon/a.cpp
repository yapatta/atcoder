#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  //dp[0]は何もしてない状態
  vector<int> h(N), dp(N+1);
  for(int i=0;i<N;i++) cin >> h[i];
  dp[0]=0,dp[1]=0,dp[2]=abs(h[0]-h[1]);
  for(int i=1;i<=N-2;i++) {
    dp[i+2] = min(dp[i]+abs(h[i+1]-h[i-1]), dp[i+1]+abs(h[i+1]-h[i]));
  }
  cout << dp[N] << endl;
}
