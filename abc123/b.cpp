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
  int a, m=10,n = 5;
  int b[5];
  int ans = 0;
  rep(i,5){
    cin >> a;
    if(a%10==0){
      ans += a;
    }else{
      m = min(m,a%10);
      ans += (a-(a%10)+10);
    }
  }
  ans += (m-10);
  cout << ans << endl;
}
