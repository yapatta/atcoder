#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  int h,w,k;
  cin >> h >> w >> k;
  ll dp[105][10];
  //初期化
  for(int i=0;i<=h+1;i++){
    for(int j=0;j<=w+1;j++){
      dp[i][j] = 0;
    }
  }
  dp[0][1] = 1;
  //for(ll i=2;i<=w;i++) dp[0][i] = 0;
  ll x=1,y=1,z=1;
  ll key[] = {1,1,2,3,5,8,13,21,34};
  for(int i=1;i<=h;i++){
    for(int j=1;j<=w;j++){
      if(j>=2) dp[i][j] += (key[j-2]*key[w-j])*dp[i-1][j-1];
      dp[i][j] += (key[j-1]*key[w-j])*dp[i-1][j];
      if(j<=w-1) dp[i][j] += (key[j-1]*key[w-j-1])*dp[i-1][j+1];

      dp[i][j] %= MOD;
    }
  }
  cout << dp[h][k] << endl;
}
