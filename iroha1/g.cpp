#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
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

ll dp[366][366][366]={};

int main(){
  int N,M,K;
  cin >> N >> M >> K;
  for(int i=0;i<=N;i++){
    for(int j=0;j<=M;j++){
      for(int k=0;k<K;k++){
        dp[i][j][k] = -1;
      }
    }
  }
  vector<ll> a(N);
  //dp[i][j] : i: 何個通ったか, j: 現状取った個数, k: 何日好意をほのめかしてないか(K未満)
  rep(i,N){
    cin >> a[i];
  }
  if(N/K > M) {
    cout << -1 << endl;
    return 0;
  }
  for(int i=0;i<K;i++){
    dp[i][0][i] = 0;
  }
  for(int i=1;i<=N;i++){
    for(int j=1;j<=M;j++){
      //前のやつのkの値
      for(int k=0;k<K;k++){
        if(dp[i-1][j-1][k]!=-1 && (dp[i-1][j][k]!=-1 && k<K-1) ){
          if(dp[i-1][j-1][k]+a[i-1] >= dp[i-1][j][k]){
            dp[i][j][0] = max(dp[i][j][0],dp[i-1][j-1][k]+a[i-1]);
          }else if(dp[i-1][j-1][k]+a[i-1] < dp[i-1][j][k]){
            dp[i][j][k+1] = max(dp[i][j][k+1],dp[i-1][j][k]);
          }
        }else if(dp[i-1][j-1][k]!=-1){
          dp[i][j][0] = max(dp[i][j][0],dp[i-1][j-1][k]+a[i-1]);
        }else if(dp[i-1][j][k]!=-1 && k<K-1){
          dp[i][j][k+1] = max(dp[i][j][k+1],dp[i-1][j][k]);
        }
      }
    }
  }

  ll dp_max = -1;
  for(ll k=0;k<K;k++){
    dp_max = max(dp_max,dp[N][M][k]);
  }
  if(dp_max==-1){
    cout << -1 << endl;
  }else{
    cout << dp_max << endl;
  }
}
