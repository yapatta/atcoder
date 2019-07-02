#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main() {
  string s;
  cin >> s;
  bool flag=false;
  for (int i=0;i<s.size();i++) {
    for (int j=0;j<s.size()-i;j++) {
      string tmp=s;
      tmp.replace(i,j,"");
      if(tmp=="keyence") {
        flag=true;
        break;
      }
    }
  }
  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}
