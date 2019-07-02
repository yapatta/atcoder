#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  return a*b/gcd(a,b);
}

int main() {
  int r,g,b;
  cin >> r >> g >> b;
  int ans= r*100+g*10+b;
  if(ans%4==0) cout << "YES" << endl;
  else cout << "NO" << endl;

}
