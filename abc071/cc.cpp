#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
const ll MOD=1e9+7;
using namespace std;

ll a[1005];
int main(){
  ll N;
  cin >> N;
  vector<ll> a(N),b;
  rep(i,N){
    cin >> a[i];
  }
  sort(All(a));
  for(ll i=N-1;i>=0;i--){
    if(a[i]==a[i-1]){
      b.push_back(a[i]);
      i--;
    }
    if(b.size()==2) {
      cout << b[0]*b[1] << endl;
      return 0;
    }
  }
  cout << 0 << endl;
}
