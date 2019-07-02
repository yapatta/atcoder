#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(int (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int n[6]={};
int main() {
  string s;
  cin >> s;
  rep(i,s.size()) {
    n[s[i]-'A']++;
  }
  rep(i,6) {
    if(i!=0) cout << " ";
    cout << n[i];
  }
  cout << endl;
}
