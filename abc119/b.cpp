#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define BTC 380000
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
  int N;
  cin >> N;
  double sum=0;
  rep(i,N){
    double x;
    string u;
    cin >> x >> u;
    if(u=="BTC"){
      sum+=x*BTC;
    }else{
      sum+=x;
    }
  }
  printf("%.5f\n",sum);
}
