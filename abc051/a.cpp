#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  string s;
  cin >> s;
  string a,b,c;
  a = s.substr(0,5);
  b = s.substr(6,7);
  c = s.substr(14,5);
  cout << a << " " << b << " " << c << endl;
}
