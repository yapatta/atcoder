#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s,ans;
  cin >> s;
  ans = s[0] + to_string(s.size()-2) + s[s.size()-1];
  cout << ans << endl;
}
