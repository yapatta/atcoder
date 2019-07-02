#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll n;
  cin >> n;
  vector<ll> a(n+1);
  for(int i=0;i<n;i++) {
    cin >> a[i];
  }
  a[n]=0;
  ll r=0,l=0;
  for(l=0;l<n;l++) {
    if(a[l]>=a[l+1]) {
      r=l;
      break;
    }
  }
  ll ans=(r+1);
  for(l=1;l<=n-1;l++) {
    if(l>r) r=l;
    while(a[r]<a[r+1]) {
      r++;
    }
    ans+=(r-l+1);
    //cout << l << " " << r << endl;
  }
  cout << ans << endl;
}
