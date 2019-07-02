#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> l(n);
  int ans=0;
  for(int i=0;i<n;i++) {
    cin >> l[i];
  }
  sort(l.begin(),l.end());
  for(int i=n-1;i>=n-k;i--) {
    ans += l[i];
  }
  cout << ans << endl;
}
