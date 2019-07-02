#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  return a*b/gcd(a,b);
}

int main() {
  ll a,b,n;
  cin >> a >> b >> n;
  ll l = lcm(a,b);
  if(n%l==0) {
    cout << n << endl;
  }else{
    cout << (n/l+1)*l << endl;
  }
  cout <<  << endl;
}
