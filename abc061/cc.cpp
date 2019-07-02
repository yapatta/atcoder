#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
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

int main() {
  ll N,K;
  cin >> N >> K;
  ll num[100005]={};
  rep(i,N){
    ll a,b;
    cin >> a >> b;
    num[a]+=b;
  }
  ll count=0;
  for(ll i=1;i<=100000;i++){
    count+=num[i];
    if(count>=K){
      cout << i << endl;
      return 0;
    }
  }
}
