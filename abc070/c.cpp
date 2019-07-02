#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 100005
using namespace std;
const ll MOD=1e9+7;

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  ll tmp=gcd(a,b);
  ll ta=a/tmp,tb=b/tmp;
  return ta*tb*tmp;
}

int main(){
  ll N,sum;
  cin >> N;
  cin >> sum;
  rep(i,N-1){
    ll tmp;
    cin >> tmp;
    sum=lcm(sum,tmp);
  }
  cout << sum << endl;
}
