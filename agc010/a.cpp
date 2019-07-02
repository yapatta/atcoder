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
  ll even = 0, odd = 0;
  rep(i,N){
    ll a;
    cin >> a;
    if(a%2 ==0) even++;
    else odd++;
  }
  if(odd%2 == 0){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
