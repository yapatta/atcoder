#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(ll (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 100005
using namespace std;
const ll MOD=1e9+7;

ll fuct(ll n) {
    if (n==1) return 1;
    else return n*fuct(n-1)%MOD;
}

//aのb乗
ll calc(ll a, ll b) {
    if (b==0){
      return 1;
    }else if (b==1){
      return a;
    }else if (b%2==0){
      ll tmp=calc(a,b/2);
      return tmp*tmp%MOD;
    }else{
      return a*calc(a,b-1)%MOD;
    }
}
int main(){
  ll W,H;
  cin >> W >> H;
  cout << fuct(W+H-2)*calc(fuct(H-1),MOD-2)%MOD*calc(fuct(W-1),MOD-2)%MOD << endl;
}
