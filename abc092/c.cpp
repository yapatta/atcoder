#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll N;
  cin >> N;
  vector<ll> a(N+2);
  ll sum=0;
  a[0]=0;
  for(int i=1;i<=N;i++) {
    cin >> a[i];
    sum += llabs(a[i]-a[i-1]);
  }
  a[N+1]=0;
  sum += llabs(a[N]-a[N+1]);

  for(int i=1;i<=N;i++) {
    ll ans=sum;
    ans -= (llabs(a[i]-a[i-1])+llabs(a[i+1]-a[i]));
    ans += llabs(a[i-1]-a[i+1]);
    cout << ans << endl;
  }
}
