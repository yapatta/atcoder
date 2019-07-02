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
  ll N,a[5];
  cin >> N;
  rep(i,5){
    cin >> a[i];
  }
  sort(a,a+5);
  ll ans = 4;
  ans += ( (N%a[0]==0) ? (N/a[0]) : (N/a[0]+1) );
  cout << ans << endl;
}
