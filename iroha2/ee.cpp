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
ll fuc[200005]={};

ll fuct(ll n);
ll calc(ll a, ll n);
ll calc_opt(ll a,ll n);
ll comb(ll a, ll b);
ll fuct_opt(ll n);

ll fuct(ll n) {
    if(n==0) return fuc[0];
    if (n==1) return fuc[1];
    if(fuc[n]==0) return fuc[n] = (n*fuct(n-1))%MOD;
    return fuc[n];
}

//aのb乗
ll calc(ll a, ll n) {
    if (n==0){
      return 1;
    }else if (n==1){
      return a;
    }else if (n%2==0){
      ll tmp=calc(a,n/2);
      return (tmp*tmp)%MOD;
    }else{
      return (a*calc(a,n-1))%MOD;
    }
}

ll calc_opt(ll a,ll n){
  ll ans = 1;
  while(n > 0){
    if((n&1) == 1){
      ans = ans * a;
    }
    ans %= MOD;
    a = (a*a)%MOD;
    n >>= 1;
  }
  return ans;
}

ll comb(ll a, ll b){
  if(a==b || b==0) return 1;
  return (((fuct(a)*calc(fuct(b),MOD-2))%MOD)*calc(fuct(a-b),MOD-2))%MOD;
}
ll fuct_opt(ll n){
  ll f = fuct(n/2)%MOD;
  //偶数
  if((n&1)==0) return ((f*f)%MOD * comb(n,n/2)%MOD)%MOD;
  else return ((f*f)&MOD * comb(n,n/2)%MOD * ((n+1)/2) )%MOD;
}

signed main(){
  //初期化
  fuc[0] = 1;
  fuc[1] = 1;
  ll N,M;
  cin >> N >> M;
  //ansは絶対に-MODより大きく、MODより小さい
  ll ans = comb(N+M-2,M-1);
  ll minus = 0;
  for(ll k=1;k<=min(N,M);k++){
    if(k>=N-k && M-1>=M-k){
      //cout << comb(k,N-k) << " " << comb(M-1,M-k) << endl;
      minus += (comb(k,N-k)*comb(M-1,M-k))%MOD;
    }
    minus %= MOD;
  }
  ans -= minus;

  if(ans>=0) cout << ans << endl;
  else cout << MOD+ans << endl;
}
