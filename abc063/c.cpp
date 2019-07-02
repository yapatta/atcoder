#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
#define All(x) (x).begin(),(x).end()
#define MAX 1005
const ll MOD=1e9+7;
using namespace std;
ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  ll tmp=gcd(a,b);
  return (a/tmp)*(b/tmp)*tmp;
}

int main() {
  int N;
  cin >> N;
  int ans=0;
  vector<int> s(N);
  rep(i,N){
    cin >> s[i];
    ans+=s[i];
  }
  sort(All(s));
  while(1){
    if(ans%10!=0){
      cout << ans << endl;
      return 0;
    }
    for(int t : s){
      if(t%10!=0){
        ans-=t;
        cout << ans << endl;
        return 0;
      }
    }
    //すべて10の倍数のとき
    cout << 0 << endl;
    return 0;
  }
}
