#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  ll N;
  cin >> N;
  vector<ll> a(N),b(N),c(N);
  for(ll i=0;i<N;i++) cin >> a[i];
  for(ll i=0;i<N;i++) cin >> b[i];
  for(ll i=0;i<N;i++) cin >> c[i];
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());
  ll ans=0;
  for(int i=0;i<N;i++) {
    ans+=((lower_bound(a.begin(),a.end(),b[i])-a.begin())*(c.end()-upper_bound(c.begin(),c.end(),b[i])));
  }
  cout << ans << endl;
}
