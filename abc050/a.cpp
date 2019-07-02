#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  ll a,b,ans;
  char op;
  cin >> a >> op >> b;
  if(op=='+') ans = a+b;
  else ans = a-b;
  cout << ans << endl;
}
