#include <bits/stdc++.h>
#define MAX 100000000
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main() {
  int N,K;
  cin >> N >> K;
  //dp[0]は何もしてない状態
  vector<ll> h(N), dp(N+1);
  for(int i=0;i<N;i++) cin >> h[i];
  dp[0]=0,dp[1]=0;

  for(int i=2;i<=N;i++) {
    ll min=dp[i-1]+abs(h[i-1]-h[i-2]);
    for(int num=2;i-1-num>=0&&num<=K;num++) {
      if(min > dp[i-num]+abs(h[i-1]-h[i-1-num]) )
        min = dp[i-num]+abs(h[i-1]-h[i-1-num]);
    }
    dp[i]=min;
  }
  cout << dp[N] << endl;
}
