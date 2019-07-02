#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcd(ll a, ll b) {
  return a*b/gcd(a,b);
}

int main() {
  ll n,m;
  cin >> n >> m;
  string s,t;
  cin >> s >> t;
  bool flag=true;
  ll l=lcd(n,m);
  ll nl=l/n,ml=l/m;
  ll nmLcd = lcd(nl,ml);

  for(ll i=1;i<=l;i+=nmLcd) {
    if( (i-1)%nl==0 && (i-1)%ml==0) {
      if( s[(i-1)/nl] != t[(i-1)/ml]) {
        flag=false;
        break;
      }
    }
  }
  if(flag) cout << l << endl;
  else cout << -1 << endl;
}
