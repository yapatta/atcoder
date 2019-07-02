#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  int a,b,c,ans;
  cin >> a >> b >> c;
  if(a==b&&b==c) ans=1;
  else if(a==b||b==c||c==a) ans=2;
  else ans=3;
  cout << ans << endl;
}
