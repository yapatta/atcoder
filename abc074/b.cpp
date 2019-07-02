#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  int ans=0;
  for(int i=0;i<n;i++) {
    int x;
    cin >> x;
    int ma= min(x,k-x);
    ans = ans+ma*2;
  }
  cout << ans << endl;
}
