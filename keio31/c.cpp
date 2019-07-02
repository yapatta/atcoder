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
  ll n,d;
  cin >> n >> d;
  vector<ll> x(n);
  rep(i,n){
    cin >> x[i];
  }
  ll left = x[1]-x[0],right=x[1]-x[0];
  ll i = 1;
  ll ans = 0;
  while(1){
    ll j = i;
    if(left<=d){
      while(j<=n){
        right += (x[j+1]-x[j]);
        if(right>d) {
          ans++;
          j++;
        }else{
          break;
        }
      }
    }
  }
  cout << ans << endl;
}
