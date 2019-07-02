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
  ll x,y;
  cin >> x >> y;
  if(x*y>0){
    if(x<=y) cout << llabs(y-x) << endl;
    else cout << llabs(y-x)+2 << endl;
  }else if(x*y<0){
    cout << llabs(x+y)+1 << endl;
  }else{
    if(x<0){
      cout << llabs(x+y) << endl;
    }else if(y<0){
      cout << llabs(x+y)+1 << endl;
    }else if(x>0){
      cout << llabs(x+y)+1 << endl;
    }else{
      cout << llabs(x+y) << endl;
    }
  }
}
