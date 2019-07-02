#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

//もし0~i-1の要素でwを作れたらdp[i][w]=1;
int dp[105][10005]={};

int main() {
  int N;
  cin >> N;
  vector<int> p(N),ans(N);
  for(int i=0;i<N;i++) {
    cin >> p[i];
  }
  sort(p.begin(),p.end());

  ans[0]=p[0];
  for(int i=1;i<N;i++) {
    ans[i] = ans[i-1]+p[i];
  }
  //0~i-1の要素で0を作れる
  for(int i=0;i<=N;i++) dp[i][0]=1;

  for(int i=1;i<=N;i++) {
    for(int j=0;j<=ans[i-1];j++) {
      for(int w=0;w<i;w++) {
        if(j>=p[w]) {
          dp[i][j]=max(dp[i-1][j-p[w]], dp[i-1][j]);
        }else {
          dp[i][j]=dp[i-1][j];
        }
      }
    }
  }

  //0は絶対作れる
  ll count=1;
  for(int w=1;w<=ans[N-1];w++) {
    if(dp[N][w]==1) count++;
  }
  cout << count << endl;
}
