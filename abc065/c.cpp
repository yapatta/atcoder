#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
const ll MOD=1e9+7;
using namespace std;
ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  ll tmp=gcd(a,b);
  return (a/tmp)*(b/tmp)*tmp;
}
ll ex(ll x){
  if(x==1) return 1;
  return (x*ex(x-1))%MOD;
}

int main() {
  ll N,M;
  cin >> N >> M;
  if(llabs(N-M)>=2) {
    cout << 0 << endl;
    return 0;
  }
  if(llabs(N-M)==1) {
    cout << ex(N)*ex(M)%MOD  << endl;
  }else if(M==N) {
    cout << 2*ex(N)*ex(M)%MOD  << endl;
  }
}
