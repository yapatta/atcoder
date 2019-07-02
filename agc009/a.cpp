#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll N;
  cin >> N;
  vector<ll> a(N),b(N);
  rep(i,N){
    cin >> a[i] >> b[i];
  }
  ll plus = 0;
  for(ll i=N-1;i>=1;i--){
    if(a[i]%b[i] != 0){
      plus += (b[i]-a[i]%b[i]);
    }
    a[i-1] += plus;
  }
  if(a[0]%b[0] != 0){
    plus += (b[0]-a[0]%b[0]);
  }

  cout << plus << endl;
}
