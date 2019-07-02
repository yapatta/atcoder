#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define __TRUE "yes"
#define __FALSE "no"

int main() {
  string s;
  cin >> s;
  bool flag=true;
  for(int i=0;i<s.size()-1;i++) {
    for(int j=i+1;j<s.size();j++) {
      if(s[i] == s[j]) {
        flag=false;
        break;
      }
    }
  }
  if(flag) cout << __TRUE << endl;
  else cout << __FALSE << endl;
}
