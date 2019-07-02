#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s,ans;
  cin >> s;
  for(int i=0;i<s.size();i+=2) {
    ans += s[i];
  }
  cout << ans << endl;
}
