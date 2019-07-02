#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int al[26]={};
int main() {
  string s;
  cin >> s;
  for(int i=0;i<s.size();i++) {
    al[s[i]-'a']=1;
  }
  for(int i=0;i<26;i++) {
    if(al[i]==0) {
      cout << char('a'+i) << endl;
      return 0;
    }
  }
  cout << "None" << endl;
}
