#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(X) (x).begin(),(x).end()
using namespace std;
const ll KEY=1e18;

int main() {
  ll a,b,c,k;
  ll tmp1,tmp2,tmp3;
  cin >> a >> b >> c >> k;
  ll x=a-b;
  if(llabs(a-b)>KEY) cout << "Unfair" << endl;
  else {
    if(k%2==0){
      cout << x << endl;
    }else{
      cout << -x << endl;
    }
  }
}
