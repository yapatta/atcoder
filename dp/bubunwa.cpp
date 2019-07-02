#include <bits/stdc++.h>
using namespace std;

int dp[105][10005];
int main() {
  int N,A;
  cin >> N;
  vector<int> a(N);
  cin >> A;
  for(int i=0;i<N;i++) {
    cin >> a[i];
  }
  dp[0][0]=1;
  for(int ans=1;ans<=A;ans++) dp[0][ans]=0;
  for(int i=0;i<N;i++) {
    for(int ans=0;ans<=A;ans++) {
      if(ans>=a[i]) {
        dp[i+1][ans] = dp[i][ans-a[i]] + dp[i][ans];
      }
      else dp[i+1][ans] = dp[i][ans];
    }
  }
  cout << dp[N][A] << endl;
}
