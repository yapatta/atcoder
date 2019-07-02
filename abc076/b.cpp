#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main() {
  int n,k;
  cin >> n >> k;
  int ans=1;
  for(int i=0;i<n;i++) {
    if(ans<=k) {
      ans *= 2;
    } else {
      ans += k;
    }
  }
  cout << ans << endl;
}
