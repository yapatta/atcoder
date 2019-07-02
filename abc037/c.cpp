#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n,k,ans=0;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }
  ll tmp=0;
  for(int i=0;i<k;i++) {
    tmp += a[i];
  }
  ans += tmp;
  for(int i=0;i<n-k;i++) {
    tmp -= a[i];
    tmp +=a[i+k];
    ans += tmp;
  }
  cout << ans << endl;
}
