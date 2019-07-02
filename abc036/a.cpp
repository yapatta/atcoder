#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int a,b;
  cin >> a >> b;
  if(b%a==0) cout << b/a << endl;
  else cout << b/a+1 << endl;
}
