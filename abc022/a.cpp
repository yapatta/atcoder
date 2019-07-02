#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
using namespace std;

ll dp[MAX]={0};
int main(){
  ll n,s,t,w;
  cin >> n >> s >> t >> w;
  ll a,count=0;
  dp[0]=w;
  if(s<=dp[0]&&dp[0]<=t) count++;
  for(ll i=1;i<n;i++){
    ll a;
    cin >> a;
    dp[i]=dp[i-1]+a;
    if(s<=dp[i]&&dp[i]<=t) count++;
  }
  cout << count << endl;
}
