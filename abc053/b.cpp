#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  string s;
  cin >> s;
  int a,z;
  for(int i=0;i<s.size();i++) {
    if(s[i]=='A') {
      a=i;
      break;
    }
  }
  for(int i=s.size()-1;i>=0;i--) {
    if(s[i]=='Z') {
      z=i;
      break;
    }
  }
  int max=z-a+1;
  cout << max << endl;
}
