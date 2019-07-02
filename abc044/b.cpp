#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  string w;
  int al[26]={};
  cin >> w;
  for(int i=0;i<w.size();i++) {
    al[w[i]-'a']++;
  }
  bool flag=true;
  for(int i=0;i<26;i++) {
    if(al[i]%2!=0) {
      flag=false;
      break;
    }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
