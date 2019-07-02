#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  string s;
  ll t,x=0,y=0,count=0;
  cin >> s >> t;
  for(int i=0;i<s.size();i++) {
    if(s[i]=='L') {
      x--;
    }else if(s[i]=='R') {
      x++;
    }else if(s[i]=='U') {
      y++;
    }else if(s[i]=='D') {
      y--;
    }else if(s[i]=='?'){
      count++;
    }
  }
  ll ans;
  if(t==1) {
    ans = (llabs(x)+llabs(y)+count);
  }else {
    if((llabs(x)+llabs(y)-count) < 0) {
      ans = -(llabs(x)+llabs(y)-count)%2;
    }else {
      ans = (llabs(x)+llabs(y)-count);
    }
  }
  cout << ans << endl;
}
