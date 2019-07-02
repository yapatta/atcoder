#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
const ll MOD=1e9+7;
using namespace std;

int main(){
  ll N;
  vector<ll> a(5),b(6,0);
  cin >> N;
  rep(i,5){
    cin >> a[i];
  }
  b[0]=N;
  ll ans = 0;
  while(1){
    for(int i=4;i>=0;i--){
      b[i+1] += min(a[i],b[i]);
      b[i] -= min(a[i],b[i]);
    }
    ans++;
    if(b[5]==N){
      break;
    }
  }
  cout << ans << endl;
}
