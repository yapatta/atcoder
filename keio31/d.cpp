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
  ll h,m,s;
  cin >> h >> m >> s;
  ll c1,c2;
  cin >> c1 >> c2;
  ll p,x,y;
  p = 3600*h + 60*m + s;
  x = p/3600 - p/(3600*12);
  y = p/60 - p/3600;
  cout << x << endl;
  cout << y << endl;
  ll q1,q2;
  q1 = 3600*(c1+y)/59;
  q2 = 3600*12*(c2+x)/11;
  /*
  for(ll q=p;q<=3600*12;q++){
    if(c1+y==(q/60 - q/3600) && c2+x==(q/3600 - q/(3600*12))){
      cout << q << " " << q+60 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  */

  cout << q1 << endl;
  cout << q2 << endl;
  cout << p << endl;


  ll t1 = max(q1,q2)-p;
  ll t2 = min(q1+60,q2+3600)-p;
  cout << t1 << " " << t2 << endl;
}
