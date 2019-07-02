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

int main(){
  ll N,D,K
  cin >> N >> D >> K;
  vector<ll> l(D),r(D),s(K),t(K);
  rep(i,D){
    cin >> l[i] >> r[i];
  }
  rep(i,K){
    cin >> s[i] >> t[k];
  }
}
