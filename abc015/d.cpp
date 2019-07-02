#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define MAX 55

struct pp{ll num,imp;};
ll dp[100005][55];

int main() {
  int W,N,K;
  cin >> W;
  cin >> N >> K;
  vector<int> width(N),imp(N);
  for(int i=0;i<N;i++) {
    cin >> width[i] >> imp[i];
  }
  //dp[j][k]=幅j,使用枚数kのときの最大価値
  dp[0][0]=0;
  for(int i=1;i<=N;i++) {
    for(int k=K;k>0;k--) {
      for(int w=width[i-1];w<=W;w++) {
        dp[w][k]=max(dp[w][k], dp[w-width[i-1]][k-1]+imp[i-1]);
      }
    }
  }
  cout << dp[W][K] << endl;
}
