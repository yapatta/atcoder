#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=998244353;
using namespace std;

int main(){
  int N,X;
  cin >> N >> X;
  vector<ll> dp(N+1,0);

  //何もないの1通り
  dp[0] = 1;
  ll n = 1;
  while(1){
    if(2*n>=X){
      break;
    }
    dp[n] = 3*dp[n-1];
    n++;
  }
  //dp[n]から始まる
  
}
