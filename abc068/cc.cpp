#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 200005
using namespace std;
const ll MOD=1e9+7;

int dp[MAX]={};
int dp2[MAX]={};

int main(){
  ll N,M;
  cin >> N >> M;

  rep(i,M){
    ll a,b,max,min;
    cin >> a >> b;
    vector< pair<ll,ll> > n;
    if(a>b){
      max=a;
      min=b;
    }else{
      max=b;
      min=a;
    }
    if(min==1) dp[max]=1;
    else if(max==N) dp2[min]=1;
  }

  for(ll key=1;key<=N;key++){
    if(dp[key]&&dp2[key]){
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
}
