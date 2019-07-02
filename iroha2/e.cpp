#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define Rall(a) (a).rbegin(), (a).rend()
#define vll vector<ll>
#define vi vector<int>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

//桁dpで行けそう?
//dp[n][m][t][1or0][1or0][1or0]: n:Aを何個見たか,m: Bを何個見たか, t: AAAがすでに存在するか,残り: 下三桁
ll dp[10005][10005][2][2][2][2]={};
int main() {
  ll N,M;
  cin >> N >> M;
  if(N<3){
    cout << 0 << endl;
    return 0;
  }
  dp[3][0][1][1][1][1] = 1;
  dp[2][1][0][1][1][0] = 1;
  dp[2][1][0][1][0][1] = 1;
  dp[2][1][0][0][1][1] = 0;
  dp[1][2][0][0][0][1] = 0;
  dp[1][2][0][0][1][0] = 0;
  dp[1][2][0][1][0][0] = 1;
  dp[0][3][0][0][0][0] = 0;



  dp[3][1][1][1][1][0] = 1;
  dp[3][2][1][1][0][0] = 1;
  dp[3][3][1][0][0][0] = 1;
  /*
  for(ll m=4;m<=M;m++){
    dp[3][m][1][0][0][0] = 1;
  }
  */

  for(ll n=3;n<N+1;n++){
    for(ll m=3;m<M+1;m++){
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
          for(int k=0;k<2;k++){
            //初期化
            dp[n][m][0][i][j][k] %= MOD;
            dp[n][m][1][i][j][k] %= MOD;

            //Aを追加
            //すでに3個連続Aが存在する場合
            dp[n+1][m][1][j][k][1] += dp[n][m][1][i][j][k];
            //すでに三個連続Aが存在しない場合
            dp[n+1][m][0][j][k][1] += dp[n][m][1][i][j][k];
            if(j==1 && k==1){
              dp[n+1][m][1][j][k][1] += dp[n][m][0][i][j][k];
            }

            //Bを追加
            dp[n][m+1][1][j][k][0] += dp[n][m][1][i][j][k];
            //すでに三個連続Aが存在しない場合
            dp[n][m+1][0][j][k][0] += dp[n][m][0][i][j][k];
          }
        }
      }
    }
  }

  ll ans = 0;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      dp[N][M][1][i][j][0] %= MOD;
      ans += dp[N][M][1][i][j][0];
    }
  }
  cout << ans << endl;
}
