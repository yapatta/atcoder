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
  ll a,b,c;
  cin >> a >> b >> c;
  if(a%2==0 || b%2==0 || c%2==0){
    cout << 0 << endl;
    return 0;
  }
  ll x,y,z;
  if(a%2 == 1){
    ll s = (a%2)*b*c;
    ll t = (a%2+1)*b*c;
    x = llabs(s-t);
  }
  if(b%2 == 1){
    ll s = (b%2)*a*c;
    ll t = (b%2+1)*a*c;
    y = llabs(s-t);
  }
  if(c%2 == 1){
    ll s = (c%2)*a*b;
    ll t = (c%2+1)*a*b;
    z = llabs(s-t);
  }
  ll m = min(x,y);
  m = min(m,z);
  cout << m << endl;
}
