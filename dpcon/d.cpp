#include <bits/stdc++.h>
#include <cstdio>
#define MAX 1000000005
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

ull dp[105][MAX];
int main() {
  ull N,W;
  scanf("%llu%llu",&N,&W);
  vector<ull> weight(N);
  vector<ull> value(N);
  for(int i=0;i<N;i++) {
    scanf("%llu",&weight[i]);
    scanf("%llu",&value[i]);
    dp[i][0]=0;
  }
  dp[N][0]=0;

  for(int i=0;i<N;i++) {
    for(int ans=0;ans<=W;ans++) {
      if(ans>=weight[i])
        dp[i+1][ans] = max(dp[i][ans-weight[i]]+value[i], dp[i][ans]);
      else
        dp[i+1][ans] = dp[i][ans];
    }
  }
  cout << dp[N][W] << endl;
}
