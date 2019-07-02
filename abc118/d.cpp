#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
using namespace std;
const ll MAX=1e9+7;

int cost[10];
int dp[10020];
bool exist[10];

void construct(){
  cost[0] = 0;
  cost[1] = 2;
  cost[2] = 5;
  cost[3] = 5;
  cost[4] = 4;
  cost[5] = 5;
  cost[6] = 6;
  cost[7] = 3;
  cost[8] = 7;
  cost[9] = 6;
  for(int i=1;i<=9;i++){
    exist[i] = false;
  }
}

int main(){
  construct();
  int N,M;
  cin >> N >> M;
  rep(i,M){
    int tmp;
    cin >> tmp;
    exist[tmp] = true;
  }

  //初期化
  for(int key=0;key<=N;key++){
    dp[key] = 0;
  }

  for(int key=0;key<=N;key++){
    for(int i=1;i<=9;i++){
      if(exist[i]){
        dp[key+cost[i]] = max(dp[key+cost[i]], dp[key]+1);
      }
    }
  }

  int keta = dp[N];
  string ans;
  while(keta >= 0 && N!=0){
    for(int i=9;i>0;i--){
      if(exist[i] && (dp[N] == dp[N-cost[i]] + 1) ){
        keta--;
        N -= cost[i];
        if(keta==0 && N!=0){
          keta++;
          N += cost[i];
          continue;
        }else{
          ans = ans + to_string(i);
          break;
        }
      }
    }
  }
  cout << ans << endl;
}
