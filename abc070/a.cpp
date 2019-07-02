#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  bool flag=true;
  if(s[0] != s[2]) {
    flag=false;
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
