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

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  return a*b/gcd(a,b);
}

int main(){
  int N,M;
  cin >> N >> M;
  vector<int>  n(M,0);
  rep(i,N){
    ll K;
    cin >> K;
    rep(j,K){
      int a;
      cin >> a;
      n[a-1]++;
    }
  }
  int count=0;
  rep(i,M){
    if(n[i]==N){
      count++;
    }
  }
  cout << count << endl;
}
