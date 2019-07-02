#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"

ll gcd(ll a, ll b) {
  if(a==0) return b;
  if(a>b) return gcd(a%b, b);
  else return gcd(b%a, a);
}
ll lcm(ll a, ll b) {
  return a*b/gcd(a,b);
}

int main() {
  ll a,b,c;
  cin >> a >> b >> c;
  bool flag=false;
  int k=1;
  while(k<=b) {
    if((k*a)%b == c) {
      flag=true;
      break;
    }
    k++;
  }
  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}
