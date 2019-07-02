#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll w,a,b;
  cin >> w >> a >> b;
  if(w+a<=b) cout << b-a-w << endl;
  else if(w+b<=a) cout << a-b-w << endl;
  else cout << 0 << endl;
}
