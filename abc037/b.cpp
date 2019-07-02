#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll N,Q;
  cin >> N >> Q;
  vector<ll> a(N,0);
  for(int i=0;i<Q;i++) {
    ll l,r,t;
    cin >> l >> r >> t;

    for(int i=l-1;i<r;i++) {
      a[i]=t;
    }
  }
  for(int i=0;i<N;i++) {
    cout << a[i] << endl;
  }
}
