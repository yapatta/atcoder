#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main() {
  string s;
  ll k;
  vector<string>  ans;
  cin >> s >> k;
  if(s.size()<k) {
    cout << 0 << endl;
    return 0;
  }
  ll count=0;
  for(int i=0;i<=s.size()-k;i++) {
    string tmp=s.substr(i,k);
    bool flag=false;
    for(int j=0;j<ans.size();j++) {
      if(tmp==ans[j]) {
        flag=true;
        break;
      }
    }
    if(!flag) {
      ans.push_back(tmp);
      count++;
    }
  }
  cout << count << endl;
}
