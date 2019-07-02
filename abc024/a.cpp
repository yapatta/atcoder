#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
using namespace std;

int main(){
  ll a,b,c,k;
  cin >> a >> b >> c >> k;
  ll s,t;
  cin >> s >> t;
  ll ans=a*s+b*t;
  if(s+t>=k) ans-=(c*(s+t));
  if(ans<0) cout << ans << endl;
  else cout << ans << endl;
}
