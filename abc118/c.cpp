#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;
const ll MAX=1e9+7;

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}

int main(){
  ll N;
  cin >> N;
  vector<ll> a(N);
  rep(i,N){
    cin >> a[i];
  }
  sort(All(a));
  ll sum=a[0];
  for(ll i=1;i<N;i++){
    sum=gcd(sum,a[i]);
  }
  cout << sum << endl;
}
