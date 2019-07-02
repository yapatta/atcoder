#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define mp make_pair
const ll MOD=1e9+7;
using namespace std;

int main(){
  int N,P;
  cin >> N >> P;
  //n[0]は偶数の個数, n[1]は奇数の個数
  int n[2]={};
  rep(i,N){
    int a;
    cin >> a;
    if(a%2==0) n[0]++;
    else n[1]++;
  }
  ll ans = pow(2,N-1);
  if(n[0]==N){
    if(P==0) cout << ans*2 << endl;
    else cout << 0 << endl;
    return 0;
  }
  cout << ans << endl;
}
