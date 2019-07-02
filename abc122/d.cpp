#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

// dp[a][b][c][d]
// a: 桁数
// b: 後ろから3文字目の値
// c: 後ろから2文字目の値
// d: 後ろから1文字目の値
ll dp[102][4][4][4] = {};

int main(){
  int N;
  cin >> N;

  //初期化
  for(int num=0;num<=2;num++){
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        for(int k=0;k<4;k++){
          dp[num][i][j][k] = 0;
        }
      }
    }
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      for(int k=0;k<4;k++){
        dp[3][i][j][k] = 1;
      }
    }
  }
  dp[3][0][1][2] = 0;
  dp[3][1][0][2] = 0;
  dp[3][0][2][1] = 0;

  for(int num=3;num<=N;num++){
    for(int a=0;a<4;a++){
      for(int b=0;b<4;b++){
        for(int c=0;c<4;c++){
          dp[num][a][b][c] %= MOD;
          for(int key=0;key<4;key++) {
            if(b==0 && c==1 && key == 2) continue;
            if(b==1 && c==0 && key == 2) continue;
            if(b==0 && c==2 && key == 1) continue;
            if(a==0 && c==1 && key == 2) continue;
            if(a==0 && b==1 && key == 2) continue;
            dp[num+1][b][c][key] += dp[num][a][b][c];
          }
        }
      }
    }
  }

  ll ans = 0;
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      for(int k=0;k<4;k++){
        ans += dp[N][i][j][k];
        ans %= MOD;
      }
    }
  }
  cout << ans << endl;
}
