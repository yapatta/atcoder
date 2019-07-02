#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string s;
  cin >> s;
  for(int i=s.size()-1;i>=0;i--) {
    string ans=s.substr(0,i);
    if(i%2 != 0) continue;
    bool flag=true;
    for(int j=0;j<i/2;j++) {
      if(ans[j] != ans[j+i/2]) {
        flag=false;
        break;
      }
    }
    if(flag) {
      cout << i << endl;
      break;
    }
  }
}
