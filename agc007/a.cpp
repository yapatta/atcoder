#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  int H,W;
  cin >> H >> W;
  vector<vector<bool> > dp( H,vector<bool>(W,false));
  vector<string> s(H);
  rep(i,H){
    cin >> s[i];
    rep(j,W){
      if(s[i][j] == '#'){
        dp[i][j] = true;
      }
    }
  }
  int a=0,b=0;
  while(1){
    if(s[a+1][b] == '#'){
      dp[a][b] = false;
      a++;
    }else if(s[a][b+1] == '#'){
      dp[a][b] = false;
      b++;
    }else{
      cout << "Impossible" << endl;
      return 0;
    }
    if(a==H-1 && b==W-1) {
      dp[a][b] = false;
      break;
    }
  }
  rep(i,H){
    rep(j,W){
      if(dp[i][j]){
        cout << "Impossible" << endl;
        return 0;
      }
    }
  }
  cout << "Possible" << endl;
  return 0;
}
