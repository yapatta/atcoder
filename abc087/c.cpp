#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int dp[3][105]={},a[3][105];

int main() {
  int N;
  cin >> N;

  for(int i=1;i<=N;i++) {
    cin >> a[1][i];
  }
  for(int i=1;i<=N;i++) {
    cin >> a[2][i];
  }
  dp[1][1]=a[1][1];
  dp[2][1]=dp[1][1]+a[2][1];
  for(int i=2;i<=N;i++) {
    dp[1][i]=dp[1][i-1]+a[1][i];
  }
  for(int i=2;i<=N;i++) {
    dp[2][i]=max(dp[2][i-1]+a[2][i],dp[1][i]+a[2][i]);
  }

  cout << dp[2][N] << endl;
}
