#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int main() {
  ll l,h,n;
  cin >> l >> h >> n;
  reps(i,0,n) {
    ll a;
    cin >> a;
    if(l<=a&&a<=h) {
      cout << 0 << endl;
    }else if(a<l) {
      cout << l-a << endl;
    }else{
      cout << -1 << endl;
    }
  }
}
