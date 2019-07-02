#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
#define reptr(i,n) for(int (i)=(n);(i)>=0;--(i))
using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;
  vector<string> m;
  for(int i=0;i<s.size();i++) {
    for(int j=0;j<s.size();j++) {
      string tmp={s[i],s[j]};
      m.push_back(tmp);
    }
  }
  cout << m[n-1] << endl;
}
