#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  string s,ans;
  cin >> s;
  for(int i=0;i<s.size();i++) {
    if(s[i]=='B') {
      if(ans.size()>0) ans.pop_back();
    }else{
      ans += s[i];
    }
  }
  cout << ans << endl;
}
