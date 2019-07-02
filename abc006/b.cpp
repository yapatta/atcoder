#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
#define KEY 10007
using namespace std;

ll dp[1000005];
int main(){
  ll n;
  cin >> n;
  dp[0]=0,dp[1]=0,dp[2]=1;
  for(ll i=3;i<n;i++){
    dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    dp[i]%=KEY;
  }
  cout << dp[n-1]%KEY << endl;
}
