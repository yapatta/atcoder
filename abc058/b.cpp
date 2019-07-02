#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  string x,y,ans;
  cin >> x >> y;
  for(int i=0;i<x.size()+y.size();i++) {
    if(i%2==0) {
      ans += x[i/2];
    }else {
      ans += y[i/2];
    }
  }
  cout << ans << endl;
}
