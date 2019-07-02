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

ll fact(ll n) {
    if(n==0) return fuc[0] = 1;
    if (n==1) return fuc[1] = 1;
    if(fuc[n]==0) return fuc[n] = (n*fact(n-1))%MOD;
    return fuc[n];
}

//aのb乗
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

ll comb(ll a, ll b){
  if(a==b || b==0) return 1;
  return (((fact(a)*calc(fact(b),MOD-2))%MOD)*calc(fact(a-b),MOD-2))%MOD;
}

int main(){
  ll H,W,A,B;
  cin >> H >> W >> A >> B;
  ll ans = 0;
  for(ll i=0;i<=H-A-1 && i<=W-B-1;i++){
    ans += comb(H-A+B-1,B+i)*comb(W-B+A-1,A+i);
    ans %= MOD;
  }
  cout << ans << endl;
}
