#include <bits/stdc++.h>
typedef unsigned long long ull;
typedef long long ll;
#define __TRUE "Yes"
#define __FALSE "No"
#define cout(x) cout << (x) << endl
#define MAX 100001
using namespace std;

int main() {
  ll N,x;
  cin >> N >> x;
  vector<ll> a(N);
  for(ll i=0;i<N;i++) {
    cin >> a[i];
  }
  ll ans=0;
  if(a[0]>x) {
    ans += (a[0]-x);
    a[0]=x;
  }
  for(ll i=1;i<N;i++) {
    if( (a[i-1]+a[i])>x ) {
      ans += (a[i]+a[i-1]-x);
      a[i]=x-a[i-1];
    }
  }
  cout << ans << endl;
}
