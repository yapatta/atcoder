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

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}

int main(){
  ll A,B,C;
  cin >> A >> B >> C;

  if(A%2==0 && B%2==0 && C%2==0){
    if(A==B && B==C){
      cout << -1 << endl;
      return 0;
    }else{
      ll ans = 0;
      while(1){
        if(A%2==0 && B%2==0 && C%2==0){
          ll a = A/2;
          ll b = B/2;
          ll c = C/2;
          A = b+c;
          B = a+c;
          C = a+b;
          ans++;
          continue;
        }
        break;
      }
      cout << ans << endl;
    }
  }else{
    cout << 0 << endl;
    return 0;
  }
}
