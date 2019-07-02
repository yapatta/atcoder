#include <bits/stdc++.h>
typedef long long ll;
#define reps(i,s,n) for(ll (i)=(s);(i)<(n);++(i))
#define rep(i,n) reps(i,0,n)
using namespace std;

int main() {
  int count=0;
  rep(i,12) {
    string a;
    cin >> a;
    rep(i,a.size()) {
      if(a[i]=='r') {
        count++;
        break;
      }
    }
  }
  cout << count << endl;
}
