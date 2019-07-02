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
  ll w,h;
  cin >> w >> h;
  ll num=gcd(w,h);
  w/=num;
  h/=num;
  cout << w <<":" << h << endl;
}
